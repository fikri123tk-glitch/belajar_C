#include<stdio.h>
#include<stdlib.h>

int main() {

    int A,B;

    printf("Masukkan panjang sisi: ");
    scanf("%d",&A);

    B=A*A;
    printf("Luas persegi: %d\n",B);  
    
    float C;
    C=0.5*B;
    printf("Luas segitiga kuning %.2f\n",C); C;

    float D;
    D=B-C;
    printf("Luas segitiga merah: %.2f\n",D);
    return 0;
}