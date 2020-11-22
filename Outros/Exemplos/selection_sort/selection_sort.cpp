// Odenação INSERTION SORT
#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

using namespace std;



void imprimeVetor(int vetor[]){

int i;
cout << "\n";

for(i = 0; i< TAM; i++){
	cout << " |" << vetor[i] << "| ";

	}
}


void selection_sort(int vetor[TAM]){

	int posicaoMenor, aux, i, j;

	for(i = 0; i< TAM; i++){

		// Recebe a posição incial para o menor valor
		posicaoMenor = i;

		//Analisa os elementos na frente
		for(j = i+1; j < TAM; j++){

			if (vetor[j] < vetor[posicaoMenor]){
				posicaoMenor = j;
			}

		}
		//  Verifica se houve mudança e troca de valores
		if(posicaoMenor !=1){
			aux = vetor[i];
			vetor[i]= vetor[posicaoMenor];
			vetor[posicaoMenor] = aux;
		}

		imprimeVetor(vetor);

	}

	

}





int main(){

	int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	
	
	selection_sort(vetor);




	return 0;

}




