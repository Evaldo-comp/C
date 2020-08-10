
#include <stdio.h>
#include <stdlib.h>

/* Operadores Aritméticos

- Subtração ou unário
+ Adição
* Multiplicação
/ Divisão
% Módulo
-- Decremento
++ Incremento

*/

void main()
{	

	int x = 10, y = 12;
	int soma = x + y;
	int sub = x - y;
	int mult = x * y;
	int Div = x / y;
	int mod = x % y;

	// Soma
	printf("A soma das variáveis é: %d\n", soma );

	// Subtração
	printf("A subtração das variáveis é: %d\n", sub );

	// Multiplicação
	printf("O produto das variáveis é: %d\n", mult );

	// A Divisão
	printf("A divisão das variáveis é: %d\n", Div );

	// Módulo
	printf("O resto da divisão das  variáveis é: %d\n", mod );

	/*Operadores de incremento e decremento
	Os operadores de incremento somam um determinado valor a propria varivel seguindo a seguinte estrtura
	x = x +1 ou x++ ou aind ++x
	Obs: Se o sinal de incremento vier antes da variável, o incremento será realizado e só 
	depois será somado o valor da variável, da mesma forma se o incremento vier depois da variável, 
	incialmente irá acrescentar o valor da variável só após essa operação  será incluido 
	o valor do incrmento, essa regra também funciona para o decremento 
	*/

	//Incremento
	x++;
	printf("O incremento de x com 1 é : %d\n",x  );
	x+=10;
	printf("O incremento de x com 10 é : %d\n",x  );

	//Decremento
	x--;
	printf("O decremento de x com 1 é : %d\n",x  );
	x-=10;
	printf("O decremento de x com 10 é : %d\n",x  );

	/* Precendência dos Operadores Aritméticos
	++, --, *, /, %, +, -
	Os parênteses podem ser utilizados para forçar a execução de determinado operador
	no caso de operadores de precedência igual a execução acontece da esquerda para a direita
	*/
	
}