#include <stdio.h>

int main() {
    char HurufAwal = 'Z';
    char Awal;
    char pilihan = 'Y';

    printf("HurufAwal (nilai awal) = %c\n", HurufAwal);
    printf("pilihan (nilai awal)   = %c\n", pilihan);

    HurufAwal = 'a';
    printf("HurufAwal setelah diisi = %c\n", HurufAwal);
    printf("Masukkan Awal: ");
    scanf(" %c", &Awal);
    printf("Awal = %c\n", Awal);

    do {
        printf("Masukkan pilihan (Y/T): ");
        scanf(" %c", &pilihan);
        if (pilihan != 'Y' && pilihan != 'T') {
            printf("Input salah, hanya boleh Y atau T.\n");
        }
    } while (pilihan != 'Y' && pilihan != 'T');
    printf("pilihan = %c\n", pilihan);

    return 0;
}