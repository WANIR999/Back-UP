#include <stdio.h>
#include <stdlib.h>

int main()
{    char ltr;

    printf("entrer une lettre :\n");
    scanf("%s",&ltr);

    switch(ltr)
    {
       case 'a':
              printf(" voyelle");break;

       case'e':
         printf(" voyelle");break;

       case'i':
         printf(" voyelle");break;

       case'u':
         printf(" voyelle");break;

       case'o':
         printf(" voyelle");break;

       case'y':
        printf(" voyelle");break;

       case'A':
        printf(" voyelle");break;

       case'E':
        printf(" voyelle");break;

       case'I':
        printf(" voyelle");break;

        case'U':
        printf(" voyelle");break;

        case'O':
        printf(" voyelle");break;

        case'Y':
        printf(" voyelle");break;

        default :
         printf("non voyelle");
    }
    return 0;
}
