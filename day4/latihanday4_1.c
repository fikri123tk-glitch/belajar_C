#include <stdio.h>
#include <stdlib.h>

int main() {
    char Barang [20] = "Toko Buku";
    char alamat [30];

    printf("barang: %s\n", Barang);

    printf("masukan alamat 1: ");
    scanf("%29s", alamat);
    printf("alamat 1: %s\n", alamat);

    printf("masukan alamat 2: ");
    fflush(stdin);
    fgets(alamat, sizeof(alamat), stdin);
    getchar();
    printf("alamat 2: %s\n", alamat);

    printf("masukan alamat 3: ");
    fflush(stdin);
    fgets(alamat, sizeof(alamat), stdin);
    getchar();
    printf("alamat 3: %s\n", alamat);

    return 0;
}
