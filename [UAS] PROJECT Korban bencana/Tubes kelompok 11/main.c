#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// include korban.h untuk mengaitkan dengan procedure 
#include "Akbar dan Rizki_korban Bencana.h"
#include <conio.h>

// max untuk id (maksimum)
#define MAX_ID 30

int main() {
    int jumlah_korban = 10;
    int jumlah_rekap = 0;
    //struct Korban dengan nama 'korban' 
    Korban korban[MAX_KORBAN] = {
    {1, 'L', 17, "Selamat", "romdon galuh", 1000, 5, 5000},
    {2, 'P', 18, "Luka Tingkat 1", "Cedera ringan di kaki", 2000, 3, 6000},
    {3, 'L', 15, "Luka Tingkat 1", "Cedera parah di kepala", 5000, 2, 10000},
    {4, 'P', 13, "Meninggal", "Korban jiwa akibat bencana", 0, 1, 0},
    {5, 'L', 17, "Selamat", "Cedera ringan di tangan", 1500, 4, 6000},
    {6, 'P', 17, "Luka Tingkat 2", "Cedera di punggung", 2500, 3, 7500},
    {7, 'L', 18, "Luka Tingkat 3", "Luka dalam di kaki", 4000, 2, 8000},
    {8, 'P', 15, "Meninggal", "Tewas akibat bencana", 0, 1, 0},
    {9, 'L', 15, "Selamat", "Cedera ringan di pergelangan tangan", 1200, 6, 7200},
    {10, 'P', 13, "Luka Ringan", "Cedera ringan di leher", 1800, 5, 9000},
};

    int pilihan;
    char password[MAX_ID];
    char id[MAX_ID];
    int ok;

    Rekap rekapan[100];
  

    do {
        //BAGIAN USER
        printf("\n=========================== USER PAGE ===========================\n");
        printf("----------------------------------------------------------------\n");
        printf(" | %-30s | %-4s |\n", "Tampilkan semua korban", "[1]");
        printf("----------------------------------------------------------------\n");
        printf(" | %-30s | %-4s |\n", "Cari Korban [USIA]", "[2]");
        printf("----------------------------------------------------------------\n");
        printf(" | %-30s | %-4s |\n", "Sort Korban [USIA]", "[3]");
        printf("----------------------------------------------------------------\n");
        printf(" | %-30s | %-4s |\n", "Login Admin", "[4]");
        printf("----------------------------------------------------------------\n");
        printf(" | %-30s | %-4s |\n", "Keluar", "[5]");
        printf("================================================================\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);
        system("cls");

        switch (pilihan) {
            case 1:  
            system("cls");
                //Menampilkan daftar korban              
                tampilkanKorban(korban, jumlah_korban);
                break;
            case 2:
                //memberi pilihan akan memilih jenis pencarian apa
                int usia;        
                int pilih;
                system("cls");
                tampilkanKorban(korban,jumlah_korban);   
                printf("=========================== JENIS SEARCH =========================\n");
                printf("\n [1] | Sequensial Search |");
                printf("\n [2] | Binary Search     |");
                printf("\n----------------------------------------------------------------");
                printf("\n========================== JENIS PENCARIAN =========================");
                printf("\n Masukan jenis pencarian: ");
                scanf("%d",&pilih);
                scanf("-----------------------------------------------------------------");
                //elif untuk pilihan yang di input
                if(pilih == 1) {
                    printf("=========================== CARI USIA =========================");
                    printf("\n Masukkan usia yang ingin dicari: ");     
                    scanf("%d", &usia);                
                    printf("----------------------------------------------------------------") ;                          
                    sequentialSearchKorbanByUsia(korban, jumlah_korban, usia);
                    break;
                } else if(pilih == 2) {
                    printf("=========================== CARI USIA =========================");
                    printf("\nMasukkan usia yang ingin dicari: ");     
                    scanf("%d", &usia);                                            
                    printf("----------------------------------------------------------------") ;                            
                    binarySearchKorbanByUsia(korban, jumlah_korban, usia);                              
                    break;
                } else {
                    printf("input tidak valid");
                    break;
                }
                break;
            case 3:
                system("cls");
                tampilkanKorban(korban,jumlah_korban);   
                printf("=========================== SORT USIA =========================");   
                printf("\n [1] | Bubble sort |");
                printf("\n [2] | Quick sort  |");
                printf("\n----------------------------------------------------------------") ; 
                printf("\n=========================== SORT USIA =========================");
                printf("\nMasukan jenis pengurutan: ");
                scanf("%d",&pilih);
                printf("\n----------------------------------------------------------------") ; 
                if(pilih == 1) {                                                 
                    bubbleSortKorbanByUsia(korban, jumlah_korban);
                    break;
                } else if(pilih == 2) {
                    quickSortKorbanByUsia(korban, 0, jumlah_korban-1);                           
                    break;
                } else {
                    break;
                }                                
                break;
                

            case 4:
                //page untuk login admin
                printf("\n=========================== LOGIN PAGE ===========================\n");
                printf("Masukkan USERNAME: ");
                scanf("%s", id);
                printf("Masukkan PASSWORD: ");
                scanf("%s", password);
                system("cls");

                // strcmp digunakan untuk string, sama aja seperti (password == admin)
                if (strcmp(password, "admin") == 0 && strcmp(id, "admin") == 0) {
                    do {
                        
                        printf("\n=========================== ADMIN PAGE ===========================\n");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Tampilkan semua korban", "[1]");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Edit/Update korban", "[2]");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Hapus Korban", "[3]");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Cari Korban [USIA]", "[4]");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Sort Korban [USIA]", "[5]");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Tambah kategori Korban", "[6]");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Tambah jumlah korban", "[7]");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Kurangi jumlah korban", "[8]");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Anggota Kelompok", "[9]");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Lihat Rincian Korban", "[10]");
                        printf("----------------------------------------------------------------\n");
                        printf(" | %-30s | %-4s |\n", "Lihat rekap perubahan", "[11]");
                        printf("================================================================\n");
                        printf(" | %-30s | %-4s |\n", "Keluar", "[12]");
                        printf("================================================================\n");
                        printf("Masukkan pilihan Anda: ");
                        scanf("%d", &pilihan);
                        system("cls");

                        switch (pilihan) {
                            case 1:
                                system("cls");
                                tampilkanKorban(korban, jumlah_korban);
                                break;
                            case 2:
                                ubahKorban(korban, &jumlah_korban); 
                                break;
                            case 3:
                                hapuskorban(korban, &jumlah_korban); 
                                break;
                            case 4:                                
                                system("cls");
                                tampilkanKorban(korban,jumlah_korban);
                                printf("\n======================= JENIS SEARCH ===============================\n");
                                printf("\n| [1] | Sequensial Search |");
                                printf("\n| [2] | Binary Search     |");
                                printf("\n----------------------------------------------------------------------");      
                                printf("\n======================= PILIHAN SORT ===========================\n");
                                printf("\n Masukan jenis pencarian: ");
                                scanf("%d",&pilih);
                                printf("------------------------------------------------------------------\n");
                                if(pilih == 1) {
                                    printf("\n======================= INPUT USIA KORBAN =======================\n");
                                    printf("\nMasukkan usia yang ingin dicari: ");                                
                                    scanf("%d", &usia);                
                                    printf("------------------------------------------------------------------\n");
                                    sequentialSearchKorbanByUsia(korban, jumlah_korban, usia);
                                    break;
                                } else if(pilih == 2) {
                                    printf("\n======================= INPUT USIA KORBAN =======================\n");
                                    printf("\nMasukkan usia yang ingin dicari: ");                                
                                    scanf("%d", &usia);                                            
                                    printf("------------------------------------------------------------------\n");
                                    binarySearchKorbanByUsia(korban, jumlah_korban, usia);                              
                                    break;
                                } else {
                                    printf("\n======================= ERROR ==================================\n");
                                    printf("input tidak valid");
                                    printf("------------------------------------------------------------------\n");
                                    break;
                                }

                            case 5:                                                                                    
                                system("cls");
                                tampilkanKorban(korban,jumlah_korban);      
                                printf("=========================== SORT USIA =========================\n");   
                                printf("\n [1] | Bubble sort |");
                                printf("\n [2] | Quick sort  |");
                                printf("\n----------------------------------------------------------------") ; 
                                printf("\n=========================== SORT USIA =========================");
                                printf("\nMasukan jenis pengurutan: ");
                                scanf("%d",&pilih);
                                if(pilih == 1) {                                                 
                                    bubbleSortKorbanByUsia(korban, jumlah_korban);
                                    break;
                                } else if(pilih == 2) {
                                    quickSortKorbanByUsia(korban, 0, jumlah_korban-1);                           
                                    break;
                                } else {
                                    break;
                                }
                                
                                break;
                            case 6:
                                system("cls");
                                tambahKorban(korban, &jumlah_korban);
                                break;
                            case 7:
                                tambahJumlahKorban(rekapan, korban, jumlah_korban, &jumlah_rekap);
                                break;
                            case 8:
                                kurangiJumlahKorban(rekapan, korban, jumlah_korban, &jumlah_rekap);
                                break;
                            case 9:
                                system("cls");
                                anggotaKelompok();
                                break;
                            case 10:
                                system("cls");                            
                                tampilkanKeteranganKorban(korban, jumlah_korban);
                                break;
                            case 11:
                                system("cls");                            
                                rekaptanggal(rekapan, jumlah_rekap);
                                break;
                            case 12:
                                system("cls");
                                 printf("\n=========================== INFORMATION ===========================\n");
                                printf("Keluar dari program.\n");
                                 printf("\n===================================================================\n");
                                break;
                            default:
                                system("cls");
                                printf("\n=========================== INFORMATION ===========================\n");
                                printf("Pilihan tidak valid. Silakan coba lagi.\n");
                                printf("\n==================================================================\n");
                                break;
                        }
                    } while (pilihan != 12);
                } else {
                    system("cls");
                    printf("\n========================= INFORMATION =========================\n");
                    printf("USERNAME dan PASSWORD Anda SALAH!\n");
                    printf("ketik '1' untuk kembali\n");
                    printf("================================================================\n");
                    scanf("%d",&ok );
                    system("cls");
                }
                break;
            case 5:
                system("cls");
                printf("\n========================= INFORMATION =========================\n");
                printf("Keluar dari program.\n");
                 printf("================================================================\n");
                break;
            default:
                system("cls");
                printf("\n========================= INFORMATION =========================\n");
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
                 printf("================================================================\n");
                break;
        }
    } while (pilihan != 5);

    return 0;
}
