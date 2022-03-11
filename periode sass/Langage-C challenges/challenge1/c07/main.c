#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("valeur de a\n");
    scanf("%d",&a);

    printf("valeur de b\n");
    scanf("%d",&b);

    printf("a+b=%d\na-b=%d\na/b=%d\na%%b=%d",a+b,a-b,a/b,a%b);
    return 0;
}
