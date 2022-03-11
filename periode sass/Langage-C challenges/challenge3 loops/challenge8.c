#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,m,fa,fm;
    a=-15;
    b=-10;
    m=(a+b)/2;
    while(1){
       fa=(a*a*a)+(12*a*a)+1;
       fm=(m*m*m)+(12*m*m)+1;
       if(fa*fm<0)
        b=m;
       else
        a=m;
       m=(a+b)/2;
       if (b-a<0.00001)
        break;
        }
     printf("%.5f %.5f",a,b);

    return 0;
}
