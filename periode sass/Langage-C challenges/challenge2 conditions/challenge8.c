#include <stdio.h>
#include <stdlib.h>
/*Ecrivez un programme pour vérifier si le nombre donné
est positif, négatif ou nul.Si le nombre est inférieur à
zéro, alors le nombre est négatif et si le
nombre est supérieur à zéro, alors lenombre est positif.
Si les deux conditions sont fausses,
le nombre est égal à zéro.*/

int main()
{   int a;
    printf("entrer un nombre:\n");
    scanf("%d",&a);

    if (a==0)
        printf("ce nombre est nul");
    else if (a<0)
        printf("ce nombre est negatif");

    else
        printf("ce nombre est positif");

    return 0;
}
