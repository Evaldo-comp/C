#include <stdio.h>
#include<stdlib.h>

int* alocaVetor(int tamanho){

    //criando um vetor auxiliar
    int *aux;
    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;

}


int main(){

    //criando ponteiro vazio
    int *vetor, tamanho, i;

    printf("Digite um tamanho para o vetor\n");
    scanf("%d", &tamanho);

    vetor = alocaVetor(tamanho);

    for (i =0; i <tamanho; i++){

    	vetor[i] = random();
    }

    for (i=0; i< tamanho; i++){

    	printf("%d\n", vetor[i]);

    }

    free(vetor); //função utilizada para limpar memória
    


}