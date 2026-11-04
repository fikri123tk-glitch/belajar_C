#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    int kode_buku = 0;
    char judul_buku[30] = "";
    char kategori;

    printf("Masukkan kode buku: ");
    scanf("%d", &kode_buku);

    getchar();

    printf("Masukkan judul buku: ");
    fgets(judul_buku, sizeof(judul_buku), stdin);

    printf("Masukkan kategori buku: ");
    scanf("%c", &kategori);

    
    printf("Kode Buku: %d\n", kode_buku);
    printf("Judul Buku: %s",  judul_buku);
    printf("Kategori Buku: %c\n", kategori);

    return 0;
}