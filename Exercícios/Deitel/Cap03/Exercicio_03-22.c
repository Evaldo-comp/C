/*
* 3.22 Pré-incrementando versus pós-incrementando. Escreva um programa que demonstre a diferença entre
* pré-decrementar e pós-decrementar usando o operador de decremento --.
*
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	
	int n1, n2;

	printf("Digite um numero inteiro: ");
	scanf("%d", &n1);

	printf("Digite um numero inteiro: ");
	scanf("%d", &n2);

	if (n1 >= n2){
		--n1;
		printf("%d\n", n1 + n2 );
	}else{
		n1--;
		printf("%d\n", n1 + n2 );
	}

	
}
	
	


