#include <stdio.h>
#include<stdlib.h>
#include<locale.h>


void main (){

	setlocale(LC_ALL, "");

	

	/*vetor de strings
	char nome [50];
	printf("Qual o seu nome?\n");
	gets(nome);
	printf("Olá %s\n", nome);
*/

	// vetor de caracteres
	char letra [26];
	int contador =0;
	for (int i = 97; i <= 122; i++){
		letra[contador] = i;
		contador++;
	}

	for (int i = 0; i < 26; ++i)
	{
		printf("%d == %c\n", letra[i], letra[i] );
	}
	
	//vetor inteiro
	int numeros [5];
	numeros[0] = 1;
	numeros[1] = 2;
	numeros[2] = 3;
	numeros[3] = 4;
	numeros[4] = 5;
	numeros[5] = 6;

	

	// vetor de reais
	float valores[5];
	for (int i = 0; i < 5; i++){
		valores[i] = (float)numeros[i]/ (float)2;
	}

	for (int i = 4; i >= 0; i--){
		printf("%f\n", valores[i] );
	}


}