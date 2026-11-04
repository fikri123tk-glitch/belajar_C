#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int UTS = 0;
    int UAS = 0;
    float rata = 0.0;

    printf("Masukkan nilai UTS: ");
    scanf("%d", &UTS);

    printf("Masukkan nilai UAS: ");
    scanf("%d", &UAS);

    rata = (UTS + UAS) / 2.0;
    printf("Rata-rata: %.2f\n", rata);
    return 0;
}