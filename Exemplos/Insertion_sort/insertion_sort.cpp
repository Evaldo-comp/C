// Odenação INSERTION SORT
#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

using namespace std;



void imprimeVetor(int vetor[]){

int i;

for(i = 0; i< TAM; i++){
	cout << " |" << vetor[i] << "| ";

	}
}
//printf("\n");

void insertion_sort(int vetor[TAM]){

	int i, j, atual;

	for(i = 1; i <TAM; i++){
		// analisa o atual

		atual = vetor[i];

		//elemento anterior ao analisado

		j = i - 1;

		//analisando membros anteriores

		while((j >=0) && (atual < vetor[j])){
			vetor[j + i] = vetor [j];

			j = j-1;
		}

		vetor[j + 1] = atual ;

		imprimeVetor(vetor) ;
		
	}

}





int main(){

	int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	
	
	insertion_sort(vetor);



	return 0;

}




