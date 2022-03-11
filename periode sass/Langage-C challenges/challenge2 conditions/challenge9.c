#include <stdio.h>
#include <stdlib.h>
/*Écrire un programme C qui décide la mention d’un élève dans une école à partir de sa moyenne. Cet élève doit avoir:
la mention «passable» pour une moyenne supérieure ou égale à 10 et inférieure à 12;
la mention «Assez bien » pour une moyenne supérieure ou égale à 12 et inférieure à 14;
la mention «Bien» pour une moyenne supérieure ou égale à 14 et inférieure à 16;
la mention «Très bien» pour une moyenne supérieure ou égale à 16.*/
int main()
{ float moyn;

    printf("entrer la moyenne:\n");
    scanf("%f",&moyn);

    if(moyn<10)
        printf("redouble\n");

        else if(moyn<12)
        printf("passable");

    else if(moyn<14)
        printf("assez bien");

    else if (moyn<16)
        printf("bien");

    else  if (moyn<20)
        printf("tres bien");
    return 0;
}
