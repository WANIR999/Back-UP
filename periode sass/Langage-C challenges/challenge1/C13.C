#include <stdio.h>
#include <stdlib.h>

int main()
{ int nomb;

    printf("ENTRER LE NOMBRE ENTIER :\n");
    scanf("%d",&nomb);

    printf("la valeur %d en octal est: %o",nomb,nomb);
    printf("la valeur %d en hexadecimale est %x",nomb,nomb);

    return 0;
}
