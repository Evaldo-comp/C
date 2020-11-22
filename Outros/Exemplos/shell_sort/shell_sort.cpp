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


void shell_sort(int vetor[TAM], int inicio, int fim){

	int i, j, atual;
	int h = i;

	while(h < TAM){
		h = 3 * h +1;
	}

	while(h > 1){

		h = h/3;

		for(i = h; i <TAM; i++){
		// analisa o atual

		atual = vetor[i];

		//elemento anterior ao analisado

		j = i - h;

		//analisando membros anteriores

		while((j >=0) && (atual < vetor[j])){
			vetor[j + h] = vetor [j];

			j = j-h;
		}

		vetor[j + h] = atual ;

		imprimeVetor(vetor) ;
		
	}

	}


	
}
	







int main(){

	int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	
	shell_sort(vetor, 0, TAM);

	imprimeVetor(vetor);




	return 0;

}




