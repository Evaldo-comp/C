#include<stdio.h>

int main(){
	int valor = 10;

	printf("Utilizando incremento de sufixo %d\n", ++valor);
	printf("Valor após o incremento %d\n", valor);

	valor = 1;

	printf("Utilizando incremento de prefixo %d\n", valor++);
	printf("Valor após o incremento %d\n", valor);

	printf("Utilizando decremento de sufixo %d\n", --valor);
	printf("Valor após o decremento %d\n", valor);

	valor = 1;

	printf("Utilizando decremento de sufixo %d\n", --valor);
	printf("Valor após o decremento %d\n", valor);

	//Técnica de Atribuição abreviada é utilizada em casos em que o valor da variável é atualizado
	//por uma operação, sendo que essa operação pode envovler  a própria variável	

	int num1 = num1+50; //Atribuição não abreviada
	num1 += 50 ; // Atribuição abreviada

	 }