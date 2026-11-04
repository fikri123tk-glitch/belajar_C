#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int faktur = 0;
    char penyewa[20] = "";
    char sepeda[20] = "Gunung";
    float jam = 2.5;
    char Status = 'M';
    float Tarif = 15000;

    printf("Masukkan nomor faktur: ");
    scanf("%d", &faktur);

    getchar();

    printf("Masukkan nama penyewa: ");
    fgets(penyewa, sizeof(penyewa), stdin);
    penyewa[strcspn(penyewa, "\n")] = 0; 

    float Temp;

    Temp = jam;
    jam = Tarif;
    Tarif = Temp;

    float Total;
    Total = jam * Tarif;

    if (Status == 'M') {
        Total = Total - (Total * 0.15);
    }
    printf("Faktur: %d | Penyewa: %s | Sepeda: %s | Status: %c | Jam: %.2f\n",
       faktur, penyewa, sepeda, Status, jam);

    printf("Total: (%.2f x %.2f) - (%.2f x 15%%) = %.2f\n",
       jam, Tarif, jam * Tarif, Total);


    return 0;
}

