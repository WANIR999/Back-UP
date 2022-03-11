



#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*Écrivez un programme C qui permet
    de calculer les solutions possibles
     d’une équation 2ème degré.a*(x*x)+b*x+c=0
      del=(b*b)-4*a*c  del<0 no solution 0=del x=-b/2a
      0<del (-b-sqrdel/2a etb-b+sqrdel/2a)  */
int main()
{ int a,b,c;
 float del,delt,S1,S2,S3;

    printf("entrer a: \n");
    scanf("%d",&a);

    printf("entrer b:\n");
    scanf("%d",&b);

    printf("entrer c:\n");
    scanf("%d",&c);

    del=(b*b)-(4*a*c);
    delt= sqrt(del);
    S1=(-1*b)/2*a;
    S2=(-1*b)-(delt/(2*a));
    S3=(-1*b)+(delt/(2*a));

    if (del==0)
        prinf("on a une seul solution:%f",S1);

    else if (del<0)
        printf("on a aucune solution");

    else
    printf("on a deux solution %f et %f",S2,S3);




    }
 return 0;
}
