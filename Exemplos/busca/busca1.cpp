#include<stdio.h>
#include<iostream>
#include<new>
#include<string>
#include<stdlib.h>
#define TAM 10

using namespace std;

int busca_simples(int vetor[TAM], int valorProcurado){
	int count;

	for (count = 0; count < TAM; count++)
	{
		if (vetor[count] == valorProcurado)
			{
				valorEncontrado = true;
				posicaoEncontrada = count;
			}	
	}

}

int main(){
	int vetor[TAM] = {1,33,22,11,2,56,23,54,2,86};
	int valorProcurado;
	int posicao, posicaoEncontrada;
	bool valorEncontrado;
	int count;

	

	//imprimindo o vetor
	for (count = 0; count < TAM; count++)
	{
		cout << vetor[count] << ", ";
	}

	printf("Qual número deseja encontrar\n");
	scanf("%d\n", &valorProcurado);

	//Executando a busca
	

	if(valorEncontrado){
		//cout <<"O valor foi encontrado na posição: " << posicaoEncontrada;
		return 1;
	}else{
		//cout << "Valor não encontrado";
		return -1;
	}
	cout <<"O valor foi encontrado na posição: " << posicaoEncontrada;
	return 0;

}