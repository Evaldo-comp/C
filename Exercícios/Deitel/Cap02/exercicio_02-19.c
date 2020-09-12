/*
 (Aritmética) escreva um programa que receba três valores inteiros do usuário e retorne a soma, 
 a média, o produto, o menor e o maior destes números. Use apenas seleções únicas de declarações if. 
 A caixa de diálogo na saída deve ser aprendido com isso:

Enter three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27

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


	printf(" A soma é: %d\n A média é: %d\n O produto é: %d\n O menor número é: %d\n O maior número é: %d\n",
		n1+n2+n3, (n1+n2+n3)/3, n1*n2*n3, menor, maior
	 );

}
	


