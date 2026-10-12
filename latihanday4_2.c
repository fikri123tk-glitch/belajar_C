#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int nomor;
    char nama[20];
    char Jenis_Kelamin;
    char alamat[30];
    char kota[20];

    printf("Masukkan nomor: ");
    scanf("%d", &nomor);
    printf("Nomor: %d\n", nomor);

    getchar();

    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);
    printf("Nama: %s", nama);

    printf("Masukkan jenis kelamin (L/P): ");
    scanf(" %c", &Jenis_Kelamin);
    printf("Jenis Kelamin: %c\n", Jenis_Kelamin);

    getchar();

    printf("Masukkan alamat: ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Alamat: %s", alamat);

    printf("Masukkan kota: ");
    fgets(kota, sizeof(kota), stdin);
    printf("Kota: %s", kota);

    return 0;
}