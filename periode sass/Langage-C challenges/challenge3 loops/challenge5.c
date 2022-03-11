#include <stdio.h>
#include <stdlib.h>

int main()
{ int nombre,nbr;
    printf("entrer le nombre:\n");
    scanf("%d",&nombre);

    do{ nbr=nombre%10;
        printf("%d",nbr);
        nombre=nombre/10;
    }
   while(nombre>0);

    return 0;
}
