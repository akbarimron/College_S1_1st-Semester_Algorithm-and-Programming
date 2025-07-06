/*
Seorang guru ingin mengetahui siswa yang mendapatkan nilai tertentu dari daftar nilai yang ada di kelas. Untuk mempermudah pencarian, guru ingin menggunakan program untuk mencari siswa berdasarkan nilai yang dicari. Program ini akan menampilkan nama siswa dan indeksnya pada daftar jika ditemukan. Jika tidak, program akan memberikan pesan bahwa siswa dengan nilai tersebut tidak ditemukan
*/
int main () {
    int nilai_cari, i, indeks_cari;
    char nama_cari[30];
    int nilai_siswa[5] = {80, 90, 75, 85, 95};
    char nama_siswa[5][30] = {"Andi", "Budi", "Caca", "Didi", "Efe"};

    printf("Masukkan nilai yang ingin dicari : ");
    scanf("%d", &nilai_cari);

    for (i = 0; i < 5; i++) {
        if (nilai_cari == nilai_siswa[i]) {
            indeks_cari = i + 1;
            strcpy(nama_cari, nama_siswa[i]);
            break;
        }
    }
    if (indeks_cari != 0) {
        printf("Siswa dengan nilai %d ditemukan pada indeks ke-%d, yaitu %s\n", nilai_cari, indeks_cari, nama_cari);
    } else {
        printf("Siswa dengan nilai %d tidak ditemukan\n", nilai_cari);
    }

    return 0;
    

}