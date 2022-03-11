#include <stdio.h>
#include <stdlib.h>

int main()
{   float temp,C;
    printf("temperature en F\n");
    scanf("%f",&temp);

    C = (temp-32)/1.8;

    printf("la temperature en celcius est %f",C);
    return 0;
}
