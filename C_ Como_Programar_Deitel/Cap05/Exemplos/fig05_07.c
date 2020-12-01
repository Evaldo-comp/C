#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i; //contador

    //estrutura do loop
    for(i= 1; i <=20; i++){
        //escolhe um número aleatório e imprime
        printf("%10d", 1+ (rand() % 6));

        if (i % 5 == 0){
            printf("\n");
        }
    }
    return 0;
}