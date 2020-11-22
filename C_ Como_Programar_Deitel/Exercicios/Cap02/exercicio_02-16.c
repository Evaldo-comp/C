/*
*
2.16 Escreva um programa que receba dois números do usuário e imprima a soma, produto . diferença, quociente e resto.
*/

#include<stdio.h>

int main(){

	int a, b;

	printf("Insira dois números\n");
	scanf("%d%d", &a, &b);

	printf("Soma: %d\n", a + b);
	printf("Subtração: %d\n", a - b);
	printf("Produto: %d\n", a * b);
	printf("Divisão: %d\n", a / b);
	printf("Resto: %d\n", a % b);


}