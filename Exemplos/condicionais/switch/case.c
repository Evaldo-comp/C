#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Uma letra pode ser impressa na forma de inteiro, dessa forma o resultado será o seu código na tabela ASCII

void  main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local da virgula deve-se usar o ponto


	int a = 10;
	char b = 'a';
	
	//Exemplo com IF  ELSE

	if (a == 10){
		printf("A variavel é 10\n");
	}else if(a == 20){
		printf("a variavel é igual a 20\n");
	}else if(a ==30){
		printf("a variavel =e igual a 30\n");
	}else if(a ==40){
		printf("a variavel é igual a 40\n");
	}else{
		printf("a variavel não tem valor conhecido\n");
	}



	//Exemplo com swtch 
	switch(a){

		case 10:
			printf("A variavel é 10\n");
			break;
		case 20:
			printf("A variavel é 20\n");
			break;
		case 30:
			printf("A variavel é 30\n");
			break;
		case 40:
			printf("A variavel é 40\n");
			break;
		default:  //utilizado caso nehum dos casos anteriores seja encontrado

			printf("valor desconhecido\n");
			break;

	
			}
			
	
	
	//Exemplo integrando for e switch

	
	char letra;
	int qtdVogais;

	for(letra = 'A'; letra <='Z';letra++){
		switch(letra){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': qtdVogais++;

		};
		
	}printf("o número de vogais é %d\n", qtdVogais );

	

	




}
