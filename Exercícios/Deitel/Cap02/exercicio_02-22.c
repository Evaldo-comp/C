/*
 Escreva um programa que lê três inteiros e determine e imprima o menor e o maior do grupo.

*/


#include<stdio.h>

int main(){
	int n1, n2, n3, maior, menor;

	printf("Insira tês números \n");
	scanf("%d%d%d", &n1, &n2, &n3);

	// Definção do maior número

	if (n1 > n2){
		if (n1 > n3){
			maior = n1;
		}
	}if (n2 > n1){
		if (n2 > n3){
			maior = n2;
		}
	}if (n3 > n1){
		if (n3 > n2){
			maior  = n3;	
		}
		
	} 

	
	// Definição do menor número

	if (n1 < n2){
		if (n1 < n3){
			menor = n1;
		}
	}if (n2 < n1){
		if (n2 < n3){
			menor = n2;
		}
	}if (n3 < n1){
		 if (n3 < n2){
		 	menor  = n3;
	}
}


	printf(" O menor número é: %d\n O maior número é: %d\n", menor, maior
	 );

}
	


