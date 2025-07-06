#include <stdio.h>

/*
    Dibuat oleh : Muhamad Akbar Imron
    NIM : 2404567
    Tanggal : 28 Desember 2024

*/

//deklarasikan fungsi dan prosedur terlebih dahulu
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
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

    printf("QuickSort:\n");
    printf("Data awal: ");
    printArray(data, n); //data sebelum di urutkan
    quickSort(data, 0, n - 1); //mengurutkan data
    printf("Data setelah QuickSort: ");
    printArray(data, n); //data setelah di urutkan


    return 0;
}
