#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char nama[40];
    int NIM = 2005;
    char angkatan[5];
    char HurufAwal;
    float umur;
    char Prodi[25]= "Teknik Komputer";
    char Keterangan[35]= "Mahasiswa Teknik Komputer";

    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);
    printf("Nama: %s", nama);
    nama[strcspn(nama, "\n")] = 0; 

    printf("Masukkan NIM: ");
    scanf("%d", &NIM);
    getchar();

    printf("Masukkan angkatan: ");
    fgets(angkatan, sizeof(angkatan), stdin);
    angkatan[strcspn(angkatan, "\n")] = 0;

    printf("Masukkan huruf awal: ");
    scanf(" %c", &HurufAwal);
    getchar();

    printf("Masukkan umur: ");
    scanf("%f", &umur);
    getchar();

    printf("\n=== Data Mahasiswa ===\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %d\n", NIM);
    printf("Angkatan: %s\n", angkatan);
    printf("Huruf Awal: %c\n", HurufAwal);
    printf("Umur: %.2f\n", umur);
    printf("Program Studi: %s\n", Prodi);
    printf("Keterangan: %s\n", Keterangan);
    return 0;
}