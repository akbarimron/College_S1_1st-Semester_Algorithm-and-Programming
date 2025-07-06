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
