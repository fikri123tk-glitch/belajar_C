#include <stdio.h>
    int main() {
    int A, B, C;
    float X, Y, Z;
    printf("Masukkan A: ");
    scanf("%d", &A);
    printf("Masukkan B: ");
    scanf("%d", &B);
    printf("Masukkan X: ");
    scanf("%f", &X);
    C = A + B;
    Y = C;
    printf("Nilai C = %d\n", C);
    printf("Nilai Y = %.2f\n", Y);
    Z = (float) A / B;
    C = Z;
    printf("Nilai Z = %.2f\n", Z);
    printf("Nilai C = %d\n", C);
    return 0;
}