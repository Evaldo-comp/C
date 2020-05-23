#include <stdio.h>
#include<stdlib.h>

void main(){

int cont;

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




}