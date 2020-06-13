

#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

using namespace std;


/*
.
.
Nesse código está definido uma forma de empilhar itens utilizando FOR.
Esse itens são previsíveis pois é utilizando apenas uma sequência crescente 
mas ela pode ser manipoada
para receber itens do usuário ou gerar números randômicos
.
.

*/

void imprime_vetor(int vetor[TAM]){
	int cont;

	cout<<"\n";

	for(cont =0; cont < TAM; cont++){
		cout << vetor[cont] << " - ";
	}

}

void pilha_push(int pilha[TAM], int valor, int *top){
	//teste para er se a pilha está cheia
	if(*top  == TAM -1){
		cout<< "A pilha está cheia";
	}else{
		*top = *top + 1;
		pilha[*top] = valor;//incluindo o primeirom item na pilha
	}

}


int main(){

	int pilha [TAM]; //inicializando a pilha
	int top = -1;      //Topo da pilha sem nenhum item

	imprime_vetor(pilha);


	//Empilhando de forma automática com for
	for(int i =0; i<TAM; i++){

		pilha_push(pilha, i, &top);	
	}
	
	 //empilhando
	//pilha_push(pilha, 10, &top); //empilhando

	imprime_vetor(pilha);

}
