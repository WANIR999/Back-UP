#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20], prenom[20],sexe[20];
    int age,phone;

    printf("Entrer Votre Nom :\n");
    scanf("%s",&name);

    printf("ENTRER VOTRE PRENOM :\n");
    scanf("%s",&prenom);

    printf("entrer votre age :\n");
    scanf("%d",&age);

    printf("Entrer Sexe : \n");
    scanf ("%s",&sexe);

    printf("entrer le numero de telephone : \n");
    scanf("%d",&phone);


    printf("Name: %s , Prenom : %s , Age : %d Ans , sexe : %s , Tele : %d",name,prenom,age,sexe,phone);




    return 0;
}
