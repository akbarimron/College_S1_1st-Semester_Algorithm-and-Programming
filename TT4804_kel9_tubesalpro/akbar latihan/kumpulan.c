//TREE

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == NULL)
        return createNode(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}

Node* findMin(Node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

Node* delete(Node* root, int data) {
    if (root == NULL) return NULL;
    if (data < root->data)
        root->left = delete(root->left, data);
    else if (data > root->data)
        root->right = delete(root->right, data);
    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if (root) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

Node* search(Node* root, int data) {
    if (root == NULL || root->data == data) return root;
    if (data < root->data)
        return search(root->left, data);
    else
        return search(root->right, data);
}

void printNode(Node* root, int level) {
    if (root == NULL)
        return;
    // Cetak spasi sesuai level
    for (int i = 0; i < level; i++)
        printf("   "); // 3 spasi per level, bisa diganti '\t' jika ingin tab
    printf("%d\n", root->data);
    printNode(root->left, level + 1);
    printNode(root->right, level + 1);
}


int main() {
    Node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);
    printNode(root, 1);

    printf("Inorder: "); inorder(root); printf("\n");
    printf("Preorder: "); preorder(root); printf("\n");
    printf("Postorder: "); postorder(root); printf("\n");

    printf("Cari 60: %s\n", search(root, 60) ? "Ditemukan" : "Tidak Ditemukan");
    root = delete(root, 70);
    printf("Setelah hapus 70, Inorder: "); inorder(root); printf("\n");
    return 0;
}

//N-TREE
#include <stdio.h>
#include <stdlib.h>

typedef struct NNode {
    int data;
    struct NNode* child;    // menunjuk ke anak pertama
    struct NNode* sibling;  // menunjuk ke saudara berikutnya
} NNode;

// Membuat node baru
NNode* createNNode(int data) {
    NNode* node = (NNode*)malloc(sizeof(NNode));
    node->data = data;
    node->child = NULL;
    node->sibling = NULL;
    return node;
}

// Menambahkan child ke parent
void addChild(NNode* parent, NNode* child) {
    if (!parent->child) {
        parent->child = child;
    } else {
        NNode* temp = parent->child;
        while (temp->sibling)
            temp = temp->sibling;
        temp->sibling = child;
    }
}

// Preorder traversal
void printPreorder(NNode* root) {
    if (root) {
        printf("%d ", root->data);
        printPreorder(root->child);
        printPreorder(root->sibling);
    }
}

// Postorder traversal
void printPostorder(NNode* root) {
    if (root) {
        printPostorder(root->child);
        printf("%d ", root->data);
        printPostorder(root->sibling);
    }
}

// Cari node dengan data tertentu
NNode* searchNTree(NNode* root, int data) {
    if (root == NULL) return NULL;
    if (root->data == data) return root;
    NNode* found = searchNTree(root->child, data);
    if (found) return found;
    return searchNTree(root->sibling, data);
}

// Menghapus node dan seluruh subtree-nya
void deleteNTree(NNode* root) {
    if (root) {
        deleteNTree(root->child);
        deleteNTree(root->sibling);
        free(root);
    }
}

// Visualisasi pohon dengan indentasi
void printTree(NNode* root, int level) {
    if (root) {
        for (int i = 0; i < level; i++)
            printf("   ");
        printf("%d\n", root->data);
        printTree(root->child, level + 1);
        printTree(root->sibling, level);
    }
}

int main() {
    // Contoh struktur:
    //      1
    //     /|\
    //    2 3 4
    //      |
    //      5

    NNode* root = createNNode(1);
    NNode* child1 = createNNode(2);
    NNode* child2 = createNNode(3);
    NNode* child3 = createNNode(4);
    NNode* child4 = createNNode(5);

    addChild(root, child1);    // 2 anak pertama root
    addChild(root, child2);    // 3 anak kedua root
    addChild(root, child3);    // 4 anak ketiga root
    addChild(child2, child4);  // 5 anak pertama dari 3

    printf("Preorder: "); printPreorder(root); printf("\n");
    printf("Postorder: "); printPostorder(root); printf("\n");
    printf("Visualisasi Tree:\n");
    printTree(root, 0);

    printf("Cari 5: %s\n", searchNTree(root, 5) ? "Ditemukan" : "Tidak Ditemukan");
    deleteNTree(root);
    return 0;
}

//GRAPH
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur Data
typedef struct Edge edge;
typedef struct Simpul simpul;

typedef struct Edge {
    edge *next_jalur;
    simpul *tujuan;
    int nilai;
} edge;

typedef struct Simpul {
    edge *jalur;
    simpul *next;
    char nama[51]; // hingga 50 karakter + null terminator
} simpul;

typedef struct Graph {
    simpul *first;
} graph;

// Fungsi Membuat Simpul
simpul* tambahSimpul(graph *G, char nama[]) {
    simpul *baru = (simpul*) malloc(sizeof(simpul));
    strcpy(baru->nama, nama);
    baru->jalur = NULL;
    baru->next = NULL;

    if (G->first == NULL) {
        G->first = baru;
    } else {
        simpul *bantu = G->first;
        while (bantu->next != NULL) {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }

    return baru;
}

// Fungsi Mencari Simpul
simpul* cariSimpul(graph *G, char nama[]) {
    simpul *bantu = G->first;
    while (bantu != NULL) {
        if (strcmp(bantu->nama, nama) == 0) return bantu;
        bantu = bantu->next;
    }
    return NULL;
}

// Fungsi Menambahkan Edge (dua arah)
void tambahJalur(simpul *asal, simpul *tujuan, int nilai) {
    edge *baru = (edge*) malloc(sizeof(edge));
    baru->tujuan = tujuan;
    baru->nilai = nilai;
    baru->next_jalur = NULL;

    if (asal->jalur == NULL) {
        asal->jalur = baru;
    } else {
        edge *bantu = asal->jalur;
        while (bantu->next_jalur != NULL) {
            bantu = bantu->next_jalur;
        }
        bantu->next_jalur = baru;
    }
}

void tambahJalurDuaArah(simpul *a, simpul *b, int nilai) {
    tambahJalur(a, b, nilai);
    tambahJalur(b, a, nilai);
}

// Fungsi Menampilkan Graph
void tampilGraph(graph G) {
    simpul *node = G.first;
    while (node != NULL) {
        printf("Lokasi: %s\n", node->nama);
        edge *e = node->jalur;
        while (e != NULL) {
            printf("- Terhubung dengan: %s (cost %d)\n", e->tujuan->nama, e->nilai);
            e = e->next_jalur;
        }
        printf("\n");
        node = node->next;
    }
}

// Fungsi bantu untuk DFS (rekursif)
void DFSUtil(simpul *node, int *visited, simpul **simpulArray, int jumlahSimpul) {
    if (node == NULL) return;

    // Tandai simpul ini sudah dikunjungi
    for (int i = 0; i < jumlahSimpul; i++) {
        if (simpulArray[i] == node) {
            if (visited[i]) return; // sudah dikunjungi
            visited[i] = 1;
            break;
        }
    }

    printf("%s ", node->nama);

    edge *e = node->jalur;
    while (e != NULL) {
        // Rekursif ke simpul tujuan jika belum dikunjungi
        for (int i = 0; i < jumlahSimpul; i++) {
            if (simpulArray[i] == e->tujuan && !visited[i]) {
                DFSUtil(e->tujuan, visited, simpulArray, jumlahSimpul);
                break;
            }
        }
        e = e->next_jalur;
    }
}

// Fungsi DFS utama
void DFS(graph *G) {
    // Buat array simpul untuk indexing
    int jumlahSimpul = 0;
    simpul *bantu = G->first;
    while (bantu != NULL) {
        jumlahSimpul++;
        bantu = bantu->next;
    }

    simpul **simpulArray = (simpul**) malloc(jumlahSimpul * sizeof(simpul*));
    int idx = 0;
    bantu = G->first;
    while (bantu != NULL) {
        simpulArray[idx++] = bantu;
        bantu = bantu->next;
    }

    int *visited = (int*) calloc(jumlahSimpul, sizeof(int));

    printf("DFS: ");
    if (jumlahSimpul > 0)
        DFSUtil(simpulArray[0], visited, simpulArray, jumlahSimpul);
    printf("\n");

    free(simpulArray);
    free(visited);
}

// Fungsi BFS
void BFS(graph *G) {
    // Buat array simpul untuk indexing
    int jumlahSimpul = 0;
    simpul *bantu = G->first;
    while (bantu != NULL) {
        jumlahSimpul++;
        bantu = bantu->next;
    }

    simpul **simpulArray = (simpul**) malloc(jumlahSimpul * sizeof(simpul*));
    int idx = 0;
    bantu = G->first;
    while (bantu != NULL) {
        simpulArray[idx++] = bantu;
        bantu = bantu->next;
    }

    int *visited = (int*) calloc(jumlahSimpul, sizeof(int));
    int *queue = (int*) malloc(jumlahSimpul * sizeof(int));
    int front = 0, rear = 0;

    printf("BFS: ");
    if (jumlahSimpul == 0) {
        printf("\n");
        free(simpulArray);
        free(visited);
        free(queue);
        return;
    }

    // Mulai dari simpul pertama
    visited[0] = 1;
    queue[rear++] = 0;

    while (front < rear) {
        int u = queue[front++];
        simpul *node = simpulArray[u];
        printf("%s ", node->nama);

        edge *e = node->jalur;
        while (e != NULL) {
            // Cari indeks simpul tujuan
            for (int i = 0; i < jumlahSimpul; i++) {
                if (simpulArray[i] == e->tujuan && !visited[i]) {
                    visited[i] = 1;
                    queue[rear++] = i;
                    break;
                }
            }
            e = e->next_jalur;
        }
    }
    printf("\n");

    free(simpulArray);
    free(visited);
    free(queue);
}

// Fungsi visualisasi graf (mirip adjacency list tapi lebih ringkas)
void printVisualisasi(graph *G) {
    simpul *node = G->first;
    printf("Visualisasi Graf:\n");
    while (node != NULL) {
        printf("%s:", node->nama);
        edge *e = node->jalur;
        while (e != NULL) {
            printf(" -> %s", e->tujuan->nama);
            e = e->next_jalur;
        }
        printf("\n");
        node = node->next;
    }
}

// Fungsi main
int main() {
    graph G;
    G.first = NULL;

    // Tambah semua simpul (lokasi)
    simpul *kolam = tambahSimpul(&G, "Kolam");
    simpul *ladang = tambahSimpul(&G, "Ladang Bunga");
    simpul *gua = tambahSimpul(&G, "Gua Kupu-Kupu");
    simpul *rumahTikus = tambahSimpul(&G, "Rumah Tikus Tanah");
    simpul *istana = tambahSimpul(&G, "Istana Peri");
    simpul *rumahThumbelina = tambahSimpul(&G, "Rumah Thumbelina");

    // Tambah relasi dua arah (cost = 1)
    tambahJalurDuaArah(kolam, ladang, 1);
    tambahJalurDuaArah(ladang, gua, 1);
    tambahJalurDuaArah(gua, rumahTikus, 1);
    tambahJalurDuaArah(rumahTikus, istana, 1);
    tambahJalurDuaArah(istana, rumahThumbelina, 1);
    tambahJalurDuaArah(gua, rumahThumbelina, 1);

    // Tampilkan hasil graph
    tampilGraph(G);
    printVisualisasi(&G);

    // Jalankan DFS dan BFS
    DFS(&G);
    BFS(&G);

    return 0;
}

//HASH
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct Entry {
    int key;
    int value;
    struct Entry *next;
} Entry;

Entry* hashTable[SIZE];

int hash(int key) {
    return key % SIZE;
}

void insert(int key, int value) {
    int idx = hash(key);
    Entry* newEntry = (Entry*)malloc(sizeof(Entry));
    newEntry->key = key;
    newEntry->value = value;
    newEntry->next = hashTable[idx];
    hashTable[idx] = newEntry;
}

int search(int key) {
    int idx = hash(key);
    Entry* curr = hashTable[idx];
    while (curr) {
        if (curr->key == key)
            return curr->value;
        curr = curr->next;
    }
    return -1;
}

void delete(int key) {
    int idx = hash(key);
    Entry* curr = hashTable[idx];
    Entry* prev = NULL;
    while (curr) {
        if (curr->key == key) {
            if (prev)
                prev->next = curr->next;
            else
                hashTable[idx] = curr->next;
            free(curr);
            printf("Key %d dihapus\n", key);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    printf("Key %d tidak ditemukan\n", key);
}

void printHashTable() {
    for (int i = 0; i < SIZE; i++) {
        printf("[%d]: ", i);
        Entry* curr = hashTable[i];
        while (curr) {
            printf("(%d:%d) ", curr->key, curr->value);
            curr = curr->next;
        }
        printf("\n");
    }
}

int main() {
    for (int i = 0; i < SIZE; i++) hashTable[i] = NULL;
    insert(1, 100);
    insert(11, 200);
    insert(21, 300);
    printHashTable();
    printf("Cari key 11: %d\n", search(11));
    delete(11);
    printHashTable();
    delete(99);
    return 0;
}
