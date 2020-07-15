#include <stdio.h>
#include<stdlib.h>

void main(){

/*
for(cont = 1; cont <=10; cont++){

	printf("5 x %d = %d\n", cont, 5*cont);

}

//Contagem de 3 em 3
int b;
for (int b = 0; b < 20; b = b+2)
{
	printf("%d\n", b );

}

//Contagem Regressiva

int c;
for (int c = 20; c >= 1; --c)
{
	printf("%d\n", c );
}

//Dependendo da situação, pode-se omitir algum elemento do laço for

for(; cont2<=1000;cont2++){ //ponto e virgula no lugar do que seria o termo de inicialização
	printf("%d\n", cont2 );

}

loop simples com for
for (;;){
	printf("KKKKKKKKKKKKKKKKKKKKKKK\n");

}



//Utilizando dados tipos char em laços for
for (char letra  = 'A'; letra <='Z'; letra++)
{
	printf("%c - ", letra );
	printf("\n");
}

//Utilizando múltiplas variáveis dentro do laço for

for (int i = 0, j = 100; i < 150; i++, j++)
{
		int sum = i + j;
		printf("%d + %d  = %d \n", i, j, sum );
}
*/
//Utilizando break para parar a execução do laço antes do fim
	int i;
for  (i = 0; i < 100; i++)
{
	if (i == 50)
	{
		break;
	}
	printf("%d\n", i + 1);
}
printf("O break foi sinalizado para parar a execução no %d\n", i );

}