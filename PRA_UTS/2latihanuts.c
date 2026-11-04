#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int umur[50];
    char nama_lengkap[50];
    char jenis_kelamin[50];

    printf("Masukkan umur: ");
    scanf("%d", &umur[0]);

    getchar();

    printf("Masukkan nama lengkap: ");
    fgets(nama_lengkap, sizeof(nama_lengkap), stdin);

    getchar(); 


    printf("Masukkan jenis kelamin: ");
    fgets(jenis_kelamin, sizeof(jenis_kelamin), stdin);

    printf("Umur: %d", umur[0]);
    printf("Nama Lengkap: %s", nama_lengkap);
    printf("Jenis Kelamin: %s", jenis_kelamin);

    return 0;
}