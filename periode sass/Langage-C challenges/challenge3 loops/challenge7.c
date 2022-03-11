#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,b,x,nbr,e;
    printf("entrer lr nombre:\n");
    scanf("%d",&nbr);
    a=1;
    b=1;
    for (e=2;e<=nbr;e++){ x=b+a;
    a=b;
    b=x;}
    if(nbr<=1) printf("U(%d)=1.\n",nbr);
    else printf("U(%d)=%d.\n",nbr,x);

    return 0;
}
