/*

2.30 (Separando dígitos em um inteiro) Escreva um programa que entre com um número de cinco dígitos ,
 separe o número em dígitos individuais e imprimia este dígitos separados um do outro por três espaços. 
 [Dica: Use combinações de divisões inteiras e operação de módulo]. por exemplo, se o usuário digitar 42139,
  o programa deve imprimir 4   2   1   3   9 .  

*/


#include<stdio.h>

int main(){
	int n;
	printf("Digite um número inteiro positivo de 5 digitos\n");
	scanf("%d", &n);

	printf("%d   %d   %d   %d   %d\n",(n/10000), ((n%10000)/1000), (((n%10000)%1000)/100), ((((n%10000)%1000)%100)/10), ((((n%10000)%1000)%100)%10)/1 );
	
}