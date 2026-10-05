#include <stdio.h>
#include <stdlib.h>


int main() {

    int A,B,C;
   float X,Y,Z;
   scanf("%d %d %f",&A,&B,&X);
   C= A+B;
   Y=C;
   printf("%d %f\n",C,Y);
   Z= (float) A/B;
   C=Z;
   printf("%f %d\n",Z,C);


}