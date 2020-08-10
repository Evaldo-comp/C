#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

//Enfileirando uma fila
using namespace std;

void imprime_vetor(int vetor[TAM], int tamanho){
	int cont;

	cout << "\n";


	for(cont = 0; cont < TAM; cont++){
		cout << vetor[cont] << " - ";
	}


}



void fila_contrutor(int *frente, int *tras){

	*frente =0;
	*tras = -1;
}

void fila_enfileirar(int fila[TAM], int valor, int *tras){]
	if (*tras == TAM -1){
		cout << "Fila cheia"

	}else{
		*tras = *tras +1;
		fila[*tras] = valor;	
	}
	

}

int fila_tamanho(int tras, int frente){
	return (tras-frente) + 1;
}
int main(){

	int frente, tras;
	int fila[TAM] = {0,0,0,0,0,0,0,0,0};
	int valor;

	fila_contrutor(&frente, &tras);
	fila_enfileirar(fila, 5, &tras);
	fila_enfileirar(fila, 8, &tras);
	fila_enfileirar(fila, 12, &tras);

	imprime_vetor(fila, fila_tamanho(tras, frente));

	return 0;
}