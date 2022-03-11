#include <stdio.h>
#include <stdlib.h>

int main()

{ float temp,F;
    printf("temperature en F\n");
   scanf("%f",&temp);

    F = (temp*1.8)+32;
    printf("la temperature en celicius est %f",F);

    return 0;
}
