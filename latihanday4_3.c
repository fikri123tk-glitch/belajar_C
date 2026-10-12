#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nama[40];
    int NIM = 2005;
    char HurufAwal;
    float umur;
    char Prodi[25]= "Teknik Komputer";
    char Keterangan[35]= "Mahasiswa Teknik Komputer";

    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);
    printf("Nama: %s", nama);
    printf("NIM: %d\n", NIM);
    printf("Huruf Awal: %c\n", HurufAwal);
    printf("Umur: %.2f\n", umur);
    printf("Program Studi: %s\n", Prodi);
    printf("Keterangan: %s\n", Keterangan);
    
    return 0;
}