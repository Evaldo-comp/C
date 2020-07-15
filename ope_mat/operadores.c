#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto


	int n1 = 10, n2 = 23, sum = n1 + n2, sub =  n1 -n2, mul = n1 * n2, div = n1 /n2 , mod = n1 % n2;



	

	printf("A operação de Soma é realizada através do operador +. Exemplo: %d+%d=%d\n", n1,n2, sum);
	printf("A operação de Subtração é realizada através do operador -. Exemplo: %d-%d=%d\n", n1,n2, sub);
	printf("A operação de Multiplicação é realizada através do operador *. Exemplo: %d*%d=%d\n", n1,n2, mul);
	printf("A operação de Divisão é realizada através do operador /. Exemplo: %d/%d=%d\n", n1,n2, div);
	//printf("A operação de Módulo é realizada através do operador '%'. Exemplo: %d  %d = %d\n", n1,n2, mod);
	
}