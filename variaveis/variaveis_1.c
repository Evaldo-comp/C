#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para executar textos com sinal

void main()
{
	setlocale(LC_ALL, ""); //Permite utilizar acentos
	/* code */
	
	//Declarando variaveil do tipo inteira

	/*int a = 5; 
	int b = 7;
	printf("O numero 01 é %d\n", a );  //imprimindo variavel com quebra de linha
	printf("O numero 02 é %d\n", b );
	int soma  = a + b;
	printf("O valor das soma dos dois números  %d\n", soma);*/
	

	//Declarando variaveil do tipo Float

	/*float a = 5;  //Declarando variaveil float
	float b = 7;
	printf("O numero 01 é %f\n", a );  //imprimindo variavel com quebra de linha
	printf("O numero 02 é %f\n", b );
	float soma  = a + b;
	printf("O valor das soma dos dois números  %f\n", soma);*/


	//Declarando variaveil do tipo char

	/*char a = 'E';  //Declarando variaveil float
	char b = 'C';
	printf("A letra 01 é %c\n", a );  //imprimindo variavel com quebra de linha
	printf("a letra 02 é %c\n", b );*/


	//Captura de variável pelo usuario
	int n1,n2;
	printf("Insira o valor do primeiro número \n");
	scanf("%d", &n1);
	printf("Insira o valor do segundo número \n");
	fflush(stdin);  //Limpesa do buffer
	scanf("%d", &n2);
	int soma = n1 + n2 ;
	printf("A soma dos numeros é %d\n", soma );

	


}