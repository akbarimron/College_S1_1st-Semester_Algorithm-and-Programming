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
