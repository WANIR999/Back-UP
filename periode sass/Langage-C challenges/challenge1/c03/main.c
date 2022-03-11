#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,Km,mile;

    printf("distance en metre :\n");
    scanf("%f",&m);

    Km= m*1000;
    mile=Km*1.609;

    printf("la distance en mile et %f",mile);
    return 0;
}
