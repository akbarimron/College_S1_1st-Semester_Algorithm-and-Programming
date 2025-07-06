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
