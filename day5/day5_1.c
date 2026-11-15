#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ID_Server = 0;
char Nama_Hero[30];
int Level_awal = 0;
char job;
char nama_job[20] = "";
 
float power_level = 0.0;

int main() {

    printf("Masukkan ID Server: ");
    scanf("%d", &ID_Server);
    printf("ID Server: %d\n", ID_Server);
    getchar();

    printf("Masukkan Nama Hero: ");
    fgets(Nama_Hero, sizeof(Nama_Hero), stdin);
    printf("Nama Hero: %s", Nama_Hero);

    printf("Masukkan Level Awal: ");
    scanf("%d", &Level_awal);
    printf("Level Awal: %d\n", Level_awal);
    getchar();

    printf("Masukkan Job: ");
    scanf(" %c", &job);
    printf("Job: %c", job);


    power_level = (Level_awal * 1.5)+ 100.0;

    printf("Power Level: %.2f\n", power_level);


    if (job == 'W' || job == 'w') {
        strcpy(nama_job, "Warrior");
    } else if (job == 'M' || job == 'm') {
        strcpy(nama_job, "Mage");
    } else if (job == 'A' || job == 'a') {
        strcpy(nama_job, "Archer");
    } else {
        power_level += 10.0;
    }

    printf("===============================\n");
    printf("          CARDS HERO\n");
    printf("===============================\n");
    printf("ID Server: %d\n", ID_Server);
    printf("Nama Hero: %s", Nama_Hero);
    printf("Level Awal: %d\n", Level_awal); 
    printf("Job: %c (%s)\n", job, nama_job);
    printf("Power Level: %.2f\n", power_level);
    printf("===============================\n");


    return 0;
}