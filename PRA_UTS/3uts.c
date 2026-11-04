#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    int celcius = 0;
    float fahrenheit = 0.0;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%d", &celcius);

    getchar();

    fahrenheit = (celcius * 9.0 / 5.0) + 32.0;

    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}