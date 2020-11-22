#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

//Desenfileirando uma fila
using namespace std;

void imprime_vetor(int vetor[TAM], int tamanho){
	int cont;

	cout << "\n";


	for(cont = 0; cont < TAM; cont++){
		cout << vetor[cont] << " - ";
	}


}
bool fila_cheia(int tras){
	if (tras == TAM -1){
		return true;
	}else{
		return false;
	}

}



void fila_contrutor(int *frente, int *tras){

	*frente =0;
	*tras = -1;
}

bool fila_vazia(int frente, int tras){

	if(frente > tras){

		return true;


	}else{
		return false;

	}


}

void fila_enfileirar(int fila[TAM], int valor, int *tras){
	if (fila_cheia(*tras)){
		cout << "Fila cheia";

	}else{
		*tras = *tras +1;
		fila[*tras] = valor;	
	}
	

}
//função para desenfileirar
void fila_desenfileirar(int fila[TAM], int *frente, int tras){

	if (fila_vazia(*frente, tras)){
		cout << "Impossível desenfileirar fila vazia";
		
}else{
		cout << " O valor " << fila[frente] << "Foi removido";
		fila[*frente] = 0;
		*frente = *frente + 1;

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
	fila_desenfileirar(fila, &frente, tras);
	imprime_vetor(fila, fila_tamanho(tras, frente));

	return 0;
}