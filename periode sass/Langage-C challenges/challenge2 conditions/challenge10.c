#include <stdio.h>
#include <stdlib.h>
/*Écrire un programme C permettant de lire la valeur de la température de l'eau et d'afficher son état :

Glace si la température est inférieure à 0, t≤ 0.
Eau si la température est strictement supérieure à 0 et <100, 0 < t ≤ 100.
Vapeur si la température est strictement supérieure à 100, 100 < t.*/
int main()
{
  float temp;

    printf("entrer la temperature de l eau:\n");
    scanf("%f",&temp);

    if(temp<0)
        printf("glace\n");

        else if(temp>0 && temp<100)
        printf("eau");

    else if(temp>100)
        printf("VAPPEURE");

    return 0;
}
