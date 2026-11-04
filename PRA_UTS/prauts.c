#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int nim = 0;
    char nama[25] = "";
    char huruf = '\0';
    float berat = 0.0;
    int A = 10;
    char alamat[50] = "Bandung";

    printf("Masukkan NIM: ");
    scanf("%3d", &nim); 

    printf("Masukkan Nama: ");
    scanf(" %24[^\n]", nama);

    strcpy(alamat, "Asrama TelU Blok A"); 

    printf("Masukkan Berat: ");
    scanf("%f", &berat);

    huruf = nama[strlen(nama) - 1]; 

    berat = berat + A;


    printf("NIM: %03d\n", nim);
    printf("Nama: %s\n", nama);
    printf("Alamat: %s\n", alamat);
    printf("Berat: %.2f\n", berat);
    printf("Huruf: %c\n", huruf);
    printf("A: %d\n", A);



    return 0;
}