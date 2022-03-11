#include <stdio.h>
#include <stdlib.h>

int main()
{   float m,Km,mile;

    printf("la distance en mile : \n");
    scanf("%f",&mile);

    Km = mile*1.609;
    m=Km*1000;

    printf("la distance en metre est %f",m);

    return 0;
}
