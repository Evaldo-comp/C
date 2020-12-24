#include <stdio.h>

void calcula(int* c){  // o asterisco indica que o argumento recebido é um endereço de memória
    printf(" calcula %d %d\n", (*c), c);
    (*c)++;
    printf(" calcula %d %d\n", (*c), c);

}


int main(){
    int c = 10;

    printf("main %d\n", c);
    calcula(&c);
    printf("main %d\n",c);

}