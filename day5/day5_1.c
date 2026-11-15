#include <stdio.h>
#include <stdlib.h>

int ID_Server = 0;
char Nama_Hero[30];
int Level_awal = 0;
char job[30] = "";
 
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
    fgets(job, sizeof(job), stdin);
    printf("Job: %s", job);

    printf("Power Level: %.2f\n", power_level);

    power_level = (Level_awal * 1.5)+ 100.0;

    if (job[0] == 'W' || job[0] == 'w') {
        strcpy(job, "Warrior");
    } else if (job[0] == 'M' || job[0] == 'm') {
        strcpy(job, "Mage");
    } else if (job[0] == 'A' || job[0] == 'a') {
        strcpy(job, "Archer");
    } else {
        power_level += 10.0;
    }

    printf("===============================\n");
    printf("          CARDS HERO\n");
    printf("===============================\n");
    printf("ID Server: %d\n", ID_Server);
    printf("Nama Hero: %s", Nama_Hero);
    printf("Level Awal: %d\n", Level_awal); 
    printf("Job: %s", job);
    printf("Power Level: %.2f\n", power_level);
    printf("===============================\n");


    return 0;
}