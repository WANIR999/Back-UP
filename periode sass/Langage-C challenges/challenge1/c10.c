#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416

int main()
{   float r,c;

    printf("ENTRER LE RAYON DU CERCLE :\n");
    scanf("%f",&r);

      c= 2*pi*r;

     printf(" la circonférence du cercle est: %f",c);
    return 0;
}
