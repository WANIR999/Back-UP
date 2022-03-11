#include <stdio.h>
#include <stdlib.h>
/*Ecrivez un programme C
 piloté par menu pour convertir
  une année donnée en,
Mois
Jours
Heures
Minutes
Secondes*/

int main()
{   char a,b;

    printf("VOULEZ VOUS CONVERTIR UNE ANNEE EN:\n1:mois\n2:jours:\n3:heures\n4:minutes\n5:secondes\nentrer votre choix:");
    scanf("%c",&a);

    switch (a){
    case ('1'): printf("12mois");break;
    case ('2'): printf("365JOURS");break;
    case ('3'): printf("8760heurs");break;
    case('4'): printf("525600minutes");break;
    case('5'): printf("31536000SECONDES");break;}

    return 0;
}
