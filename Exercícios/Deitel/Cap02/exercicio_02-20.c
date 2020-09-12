/*
 (Aritmética) escreva um programa que receba três valores inteiros do usuário e retorne a soma, 
 a média, o produto, o menor e o maior destes números. Use apenas seleções únicas de declarações if. 
 A caixa de diálogo na saída deve ser aprendido com isso:

Enter three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27

*/


#include<stdio.h>

int main(){
	int tempoSegundos;

	printf("Insira o tempo total em segundos \n");
	scanf("%d", &tempoSegundos);

	printf(" Horas: %d\n Minutos: %d\n Segundos: %d\n", tempoSegundos/3600, (tempoSegundos%3600)/60, ((tempoSegundos%3600)%60)  );

	

}
	


