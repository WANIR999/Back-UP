#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2;

    printf("x du point N:\n");
    scanf("%f",&x1);

    printf("y du point N:\n");
    scanf("%f",&y1);

    printf("x du point M:\n");
    scanf("%f",&x2);

    printf("y du point M:\n");
    scanf("%f",&y2);

   float  a= (x2-x1)*(x2-x1);
   float   b= (y2-y1)*(y2-y1);
   float MN= sqrt (a+b);

   printf("la distance est : %f",MN);
    return 0;
}

