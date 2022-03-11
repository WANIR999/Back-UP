#include <stdio.h>
#include <stdlib.h>

int main()
{ /*Ecrivez un programme C
    pour calculer la somme de deux valeurs entières données
    . Si les deux valeurs sont identiques, il renvoie le triple de leur somme*/


    int a,b,s,m;

    printf("entrer a:\n");
    scanf("%d",&a);

    printf("entrer b:\n");
    scanf("%d",&b);

    s= a+b;
    m=a-b;
    if (m==0)
        printf("%d",s*3);

        else
        printf("%d",s);


    return 0;
}
