#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;

  printf("donner un entier :\n");
  scanf("%d",&nbr);

  if (nbr<0)
    printf("la valeur %d est negatif",nbr);

  else if (nbr>0)
      printf("la valeur %d est positif",nbr);

    else
      printf("la valeur %d est nul",nbr);

    return 0;
}
