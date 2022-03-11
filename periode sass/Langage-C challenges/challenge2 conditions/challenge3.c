#include <stdio.h>
#include <stdlib.h>

int main()
{ /*Ecrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair*/
    int nbr,R;

    printf("ENTRER LE NOMBRE:\n");
    scanf("%d",&nbr);

    R= nbr%2 ;

    if (R==0){ printf("le nombre %d est pair",nbr);}



        else if(R!=0){ printf("le nombre %d est impair",nbr);}

    return 0;
}
