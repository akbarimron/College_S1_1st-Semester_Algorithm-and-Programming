#include <stdio.h>
/*
    Dibuat oleh : Muhamad Akbar Imron
    NIM : 2404567
    Tanggal : 28 Desember 2024
    insertionSort

*/


void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int n = sizeof(data) / sizeof(data[0]);

    printf("\nInsertionSort:\n");
    printf("Data awal: ");
    printArray(data, n); //data awal
    insertionSort(data, n); //data diurutkan
    printf("Data setelah InsertionSort: ");
    printArray(data, n); //hasil data setelah diurutkan

    return 0;
}
