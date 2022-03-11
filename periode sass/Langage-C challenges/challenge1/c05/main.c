#include <stdio.h>
#include <stdlib.h>

int main()
{  float temp,C;
    printf("temperature en F\n");
    scanf("%f",&temp);

     C = (temp-32)/1.8;
     if (temp<0)
        printf("tres froid");
     else if (temp<20)
        printf("froid");

     else if (temp<=30)
        printf("chaud");

        else
            printf("tres chaud");


    return 0;
}
