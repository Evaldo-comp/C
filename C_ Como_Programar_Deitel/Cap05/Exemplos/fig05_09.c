#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main(void)
{
    int i; //contador
    unsigned seed; //numero usado para semear o número aleatório

    printf("Digite a semente: ");
    scanf("%u", &seed); // %u para tipo usigned

   srand(seed); //inicia o gerador de aleatórios
    //srand(time(NULL));  // função time pode ser utilizada para gerar randômicos idependentemente da semente

    for (i = 1; i <= 10; i++){
        // escolhe um aleatório de 1 a 6 e imprime
        printf( "%10d", 1 + (rand()%6));

        if (i % 5 == 0){
            printf("\n");
        }
    }

}

  