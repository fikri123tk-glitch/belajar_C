#include <stdio.h>
int main() {

    int nomor = 1;
    long long nim;
    float umur = 17.0;
    char HurufAwal, Awal, pilihan = 'A';

        HurufAwal = 'a';
        printf("Masukkan NIM: ");
        scanf("%lld", &nim);
        printf("Masukkan umur: ");
        scanf("%f", &umur);
        printf("Masukkan karakter Awal: ");
        scanf(" %c", &Awal);
        printf("Masukkan karakter pilihan: ");
        scanf(" %c", &pilihan);
        
        printf("\n=== HASIL INPUT ===\n");
        printf("Nomor : %d\n", nomor);
        printf("NIM : %lld\n", nim);
        printf("Umur : %.1f\n", umur);
        printf("HurufAwal : %c\n", HurufAwal);
        printf("Awal : %c\n", Awal);
        printf("Pilihan : %c\n", pilihan);

    return 0;
 }