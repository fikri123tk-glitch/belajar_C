#include <stdio.h>
#include <stdlib.h>

int main() {
float uang,berat_emas;

int ekivalensi;
printf("Masukkan uang dalam juta: ");
scanf("%f", &uang);
printf("Masukkan berat emas dalam gram: ");
scanf("%f", &berat_emas);
ekivalensi = uang * 100000 + berat_emas * 500000;
printf("%f juta + %f emas = %d \n", uang, berat_emas, ekivalensi);

}