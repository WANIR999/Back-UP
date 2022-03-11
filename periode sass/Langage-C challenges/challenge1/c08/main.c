#include <stdio.h>
#include <stdlib.h>

int main()
{ float a,b,c,d;

    printf("valeur de a:\n");
    scanf("%f",&a);

    printf("valeur de b:\n");
    scanf("%f",&b);

    printf("valeur de c:\n");
    scanf("%f",&c);

    printf("valeur de d: \n");
    scanf("%f",&d);

    printf("la somme est a+b+c+d=%f\nla moyenne est (a+b+c+d)/3=%f",a+b+c+d,(a+b+c+d)/4);


    return 0;
}
