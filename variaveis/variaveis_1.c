#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para executar textos com sinal

int main()
{
	setlocale(LC_ALL, ""); //Permite utilizar acentos
	/* code */
	
	// Declarando variável do tipo inteira
	//-32.768 até 32.767

	/*int a = 5; 
	int b = 7;
	printf("O numero 01 é %d\n", a );  //imprimindo variável com quebra de linha
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


	//Declarando variaveil do tipo char - -128 a 127

	/*char a = 'E';  //Declarando variaveil float
	char b = 'C';
	printf("A letra 01 é %c\n", a );  //imprimindo variavel com quebra de linha
	printf("a letra 02 é %c\n", b );*/


	//Captura de variável pelo usuário
	int n1,n2;
	printf("Insira o valor do primeiro número \n");
	scanf("%d", &n1);
	printf("Insira o valor do segundo número \n");
	fflush(stdin);  //Limpesa do buffer
	scanf("%d", &n2);
	int soma = n1 + n2 ;
	printf("A soma dos numeros é %d\n", soma );


	/* MODIFICADORES DE TIPO
	Os modificadores de tipos, altera o intervalo de valores que uma variável 
	pode armazenar ou o modo como o compilador armazena essa variável

	unsigned:
	Esse modificadoir exclui a possibilidade de utilizar o bit de sinal para representar números negativos, 
	desta forma ele amplia o tamanho da variável para armazenar números positivos.
	int -32.768 a 32.767 com o modificador 0 a 65.535
	char -128 ate 127 com o modificador 0 até 255 
	 

	
	long:
	Dobra a capacidade do int, passa a ser -2.147.483.648 até 2.147.483.647 ou seja 4 bytes
	'epossivel combinar modificador unsigned com o modificador long'

	Obs: É possivel omitir o uso do int na utilização de modificadores

	


}