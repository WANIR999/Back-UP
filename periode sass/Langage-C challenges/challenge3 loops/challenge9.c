#include <stdio.h>
#include <math.h>

int main()
{
    int nbr,n,result;
    printf("Entrez un nombre NB :\n");
    scanf("%d",&nbr);
    printf("Entrez un nombre n :\n");
    scanf("%d",&n);
    while((nbr<=0) || (n<0))
    {
        if(nbr<=0)
        {
            printf("Entrez un nombre NB supirieur a 0 \n");
            scanf("%d",&nbr);
        }
        else if(n<0)
        {
            printf("Entrez un nombre n supirieur ou egal a 0 \n");
        scanf("%d",&n);
        }


    }

     result = pow(nbr,n);
    printf("le resultat est %d",result);


    return 0;
}
