#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
#include<string>


using namespace std;

int main()
{
	/* Uma variável guarda um determinado valor, em um endereço de memória
		Um ponteiro guarda o endereço da memória*/

	int a = 12; 

	printf("%d\n", a );   //imprime o valor da variável
	printf("%p\n", &a );   //imprime o endereço

	int b = 15;

	//Criando um ponteiro
	int *ponteiro;

	ponteiro = &b;    //recebendo a posição na memoria da variavel b

	printf("Imprimindo o valor da variável b %d\n", b );

	//mudando valor da variável a partir do ponteiro
	*ponteiro = 40;

	printf("Imprimindo o valor da variável b %d\n", b );


	return 0;
}
