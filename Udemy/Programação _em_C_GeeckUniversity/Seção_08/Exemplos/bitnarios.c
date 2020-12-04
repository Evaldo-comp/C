// Deslocamento de bits

#include<stdio.h>

int main(){
    int valor = 2;
    printf("Valor vale %d\n", valor);

    // deslocamento de bits para esquerda
    valor = valor << 2;
    printf("Valor vale %d\n", valor);

    valor = 2;

    // deslocamento de bits para a direita
    valor = valor >> 2;
    printf("Valor vale %d\n", valor);

    valor = 2;
    
    // negação
    valor = ~valor;
    printf("Valor vale %d\n", valor);
}