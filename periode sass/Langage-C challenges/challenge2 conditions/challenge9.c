#include <stdio.h>
#include <stdlib.h>
/*�crire un programme C qui d�cide la mention d�un �l�ve dans une �cole � partir de sa moyenne. Cet �l�ve doit avoir:
la mention �passable� pour une moyenne sup�rieure ou �gale � 10 et inf�rieure � 12;
la mention �Assez bien � pour une moyenne sup�rieure ou �gale � 12 et inf�rieure � 14;
la mention �Bien� pour une moyenne sup�rieure ou �gale � 14 et inf�rieure � 16;
la mention �Tr�s bien� pour une moyenne sup�rieure ou �gale � 16.*/
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
