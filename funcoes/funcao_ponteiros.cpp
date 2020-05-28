#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void diminuiCinco(int *num){   //função utilizando ponteiros para fazer a alteração
	*num = *num - 5;
	printf("O numero subtraído de 5 é %d\n",*num );

}


int main()
{
int a;
printf("Digite um número\n");
scanf("%d", &a);



diminuiCinco(&a);//Envoando o endereço da memória e não a variável


 
}