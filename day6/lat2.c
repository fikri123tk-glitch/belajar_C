#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main() {

 char arah[20];
 char tujuan[20];
 int jarak;
 int total_jarak;

 printf("Masukkan  (Kota, pasar, bandara): ");
    fgets(tujuan, sizeof(tujuan), stdin);

 if(strcmp(tujuan, "Kota\n") == 0) {
        strcpy(arah, "Kanan");
        jarak = 5;
    } else if(strcmp(tujuan, "pasar\n") == 0) {
        strcpy(arah, "Kiri");
        jarak = 10;
    } else if(strcmp(tujuan, "bandara\n") == 0) {
        strcpy(arah, "Lurus");
        jarak = 15;
    } else {
        printf("Tujuan tidak valid.\n");
        return 1;
    }

    total_jarak = jarak + 20;
    
    printf("anda akan ke%smaka belok ke arah %s dengan jarak %d km,\n", tujuan, arah, jarak);     
    printf("anda akan menuempuh perjalanan sejauh: %d km sejak anda berangkat\n", total_jarak);

 }