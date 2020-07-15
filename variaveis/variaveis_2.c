#include <stdio.h>
#include <stdlib.h>

void main()
{	

	//Definindo uma variável
	int  a = 5, b;

	//Atribuiçõa Múltiplas de variáveis
	int x = y = z = 0;

	//Imprimindo a variavel
	printf("%d\n",a ); 

	
	printf("Teste\n");

	//Cocatenação
   printf("O valor da váriável a é: %d\n", a );

   //Mudando o valor de uma variavel
   a = 10;   //Não precisa mais definir o tipo dela

   printf("O valor da váriável a é: %d\n", a );

   //Lendo uma variavel 
   printf("Insira um valor qualquer para a variável b\n");
   scanf("%d", &b);

   printf("O valor que você atribui a variável b foi: %d\n", b );
	
}