#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nbr,p,somme=0;

    for(p=1;p<=10;p++){
    printf("donnes le nombre %d \n",nbr);
        scanf("%d",&nbr);

     if(nbr>0){
        somme+=nbr;
     }
     }
     printf("la somme est : %d\n",somme);



	return 0;
}
