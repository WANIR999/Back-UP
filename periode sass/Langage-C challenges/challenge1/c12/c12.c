#include <stdio.h>
#include <stdlib.h>

int main()
{  char nomb[3];

    printf("ENTRER UN NOMBER ENTIER:\n");
    scanf("%s",&nomb);

     char in=nomb[0];
      nomb[0]=nomb[2];
      nomb[2]=in;

      printf("l'ordre inverse est :%.3s",nomb);

    return 0;
}
