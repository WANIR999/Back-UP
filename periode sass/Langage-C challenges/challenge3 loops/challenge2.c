#include <unistd.h>
#include <stdio.h>

int prime(int nbr){
    int n = nbr;
    int z = 0;

    while (n > 1) {
        if (nbr % n == 0)
            z++;
        n--;
    }
    if (z != 1)
        return 0;
    else
        return 1;
}

int premier(int n){
    int index = 0;
    int nombre = 3;


    while (nombre){
        if (prime(nombre)){
            index++;
            if (index == n) {
                return nombre;
            }
        }
        nombre++;
    }
}

int main(void){

    int L;
    int i = 1;
    int l = 1;
    printf("ligne :\n");
    scanf("%d", &L);

    int k = 0;
    int esp;

    while(i <= L){

        esp = (premier(L) - premier(i)) / 2;
        while (k < esp){
            printf(" ");
            k++;
        }
        k = 0;
        while (l <= premier(i)){
            printf("*");
            l++;
        }
        l = 1;
        printf("\n");
        i++;
    }





    return 0;
}
