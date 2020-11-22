#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main (){

	char s1 [50], s2[50];

	printf("Digite seu nome\n");
	scanf("%s",s1 );

	printf("O comprimento de s1 é %ld \n", strlen(s1) );

	strcpy(s2, s1); //copia s1 para s2
	printf("%s\n", s2); //imprime s2

	strcat(s1, s2); //cocatena s2 no final de s1
	printf("%s\n",s1 ); //imprime o resultado cocatenado

	

}