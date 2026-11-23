#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int umur = 0;
    char pasangan[1];
    char tempat[20];

    printf("Masukkan umur anda: ");
    scanf("%d", &umur);

    if (umur < 20) {
        strcpy(tempat, "Suite A");
    } else if (umur >= 20) {
        printf("apakah anda membawa pasangan?\n");
        scanf(" %c", pasangan);
    }

    if (pasangan[0] == 'y') {
        strcpy(tempat, "Apartemen B");
    } else if (pasangan[0] == 't') {
        strcpy(tempat, "Apartemen C");
    }

    printf("Anda akan tinggal di %s.\n", tempat);
    return 0;
}
