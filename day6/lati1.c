#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nilai;
char status[20];

int main() {
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if(nilai > 75){
        strcpy(status, "Lulus");
    } else {
        strcpy(status, "Tidak Lulus");
    }
    printf("nilai: %d status: %s\n", nilai, status);
}