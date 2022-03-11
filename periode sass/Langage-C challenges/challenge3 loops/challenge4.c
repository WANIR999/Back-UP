#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nbr=1,S=0,MAX=0;


    while (nbr!=0){  printf("entrer une serie d'entier\n");
                               scanf("%d",&nbr);
    while(nbr<0||nbr>100){printf("entrer un nombre entre 100 et 0 \n");
    scanf("%d",&nbr);}

      S=S+nbr;

    while (nbr>MAX){MAX=nbr;}


}
            printf("la somme est: %d\n",S);
             printf("le max est: %d",MAX);






    return 0;
}
