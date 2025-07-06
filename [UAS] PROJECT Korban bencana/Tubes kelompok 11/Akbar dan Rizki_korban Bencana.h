//header guard untuk mencegah multiply inclusion (compile yang berulang)
#ifndef KORBAN_H
#define KORBAN_H

#define MAX_KORBAN 1000

//file korban.h digunakan untuk deklarasi prosedur/fungsi agar sistem tau bahwa mereka ada

//struct bagian korban
typedef struct {
    int no;
    char jenis_kelamin; 
    int usia;
    char status[MAX_KORBAN];
    char keterangan[MAX_KORBAN];
    int biaya;
    int total;
    int biayaTotal;
} Korban;

//struct untuk bagian rekap
typedef struct {
    int noKorban;
    char perubahan[20];
    int tanggal;
    int bulan;
    int jumlahPerubahan;
    int totalSetelahPerubahan;
} Rekap;

//daftar prosedur yang digunakan

void tampilkanKorban(Korban *korban, int jumlah);
void tambahKorban(Korban *korban, int *jumlah);
void ubahKorban(Korban *korban, int *jumlah);
void hapuskorban(Korban *korban, int *jumlah);

void binarySearchKorbanByUsia(Korban *korban, int jumlah, int usia);
void sequentialSearchKorbanByUsia(Korban *korban, int jumlah, int usia);

void quickSortKorbanByUsia(Korban *korban, int low, int high);
void bubbleSortKorbanByUsia(Korban *korban, int jumlah);
void Bubblesortrekap(Rekap *rekapan, int jumlah);
void Bubblesortrekapbulan(Rekap *rekapan, int jumlah);

void tambahJumlahKorban(Rekap *rekapan, Korban *korban, int jumlah, int *jumlahrekap);
void kurangiJumlahKorban(Rekap *rekapan, Korban *korban, int jumlah, int *jumlahrekap);
void anggotaKelompok();

void tampilkanKeteranganKorban(Korban *korban, int jumlah);
void rekaptanggal(Rekap *rekapan, int jumlahrekap);

#endif
