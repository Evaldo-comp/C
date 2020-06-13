

#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

using namespace std;


/*
.
. Esse código mostra como desempilhar um pilhar, indicando qual o último valor retirado
.

*/

//função para imprimir o vetor
void imprime_vetor(int vetor[TAM], int top){
	int cont;

	cout<<"\n";

	for(cont =0; cont < TAM; cont++){
		cout << vetor[cont] << " - ";
	}

	cout << "Topo" << top;

}
//Função para empilhar
void pilha_push(int pilha[TAM], int valor, int *top){
	//teste para er se a pilha está cheia
	if(*top  == TAM -1){
		cout<< "A pilha está cheia";
	}else{
		*top = *top + 1;
		pilha[*top] = valor;//incluindo o primeirom item na pilha
	}

}
//Funçção para desempilhar

void pilha_pop(int pilha[TAM], int *top){

	if(*top == -1){
		cout << " A pilha está vazia";
	}else{
		cout << "Valor removido: " << pilha[*top];
		pilha[*top] = 0;
		*top = *top -1;
	}

}

bool pilha_vazia(int top){
	if(top = -1){
		return true;
	}else{
		return false;
	}

}


int main(){

	int pilha [TAM]; //inicializando a pilha
	int top = -1, valorRe  ;   //Topo da pilha sem nenhum item

	imprime_vetor(pilha, top);

	if (pilha_vazia(pilha)){
		cout << "A pilha está vazia";
	}


	/*Empilhando de forma automática com for
	for(int i =0; i<TAM; i++){

		pilha_push(pilha, i, &top);	
	}

	*/

	pilha_push(pilha, 5, &top);
	imprime_vetor(pilha, top);

	pilha_push(pilha, 7, &top);
	imprime_vetor(pilha, top);


	pilha_pop(pilha, &top);
	
	 //empilhando
	//pilha_push(pilha, 10, &top); //empilhando

	imprime_vetor(pilha, top);

}
