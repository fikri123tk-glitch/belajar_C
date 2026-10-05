#include <stdio.h>
#include <stdlib.h>


int main() {

    int UTS,UAS;
    float nilai_akhir;
    printf("Masukkan nilai UTS: ");
    scanf("%d",&UTS);
    printf("Masukkan nilai UAS: ");
    scanf("%d",&UAS);
    nilai_akhir=(float)((UTS*0.4)+(UAS*0.6))/2;
    printf("Nilai UTS: %d\n",UTS);
    printf("Nilai UAS: %d\n",UAS);
    printf("Nilai akhir: %.2f\n",nilai_akhir);
}