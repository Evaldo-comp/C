#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void imprimeVetor(int *vetor, int tam){
	int i;

	for (i = 0; i < tam; i++){
		printf("%d\n",vetor[i] );
	} 

}


int main()
{
	int v[3]={1, 2, 3};


	imprimeVetor(v, 3);


 
}