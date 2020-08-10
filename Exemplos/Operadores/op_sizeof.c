#include <stdio.h>
#include <stdlib.h>

/*
O sizeof é um operador em tempo de execução que retorna o tamanho de um tipo de dado, não confundir com 
valor ou endereço de variável, ele retorna o tamanho do TIPO de dado.

*/

void main(){

//Utilizando o operador para incializar três variáveis

int var1 = 30;
float var2;
char var3 = 'a';

printf("%ld\n", sizeof var1);
printf("%ld\n", sizeof var2);
printf("%ld\n", sizeof var3);
printf("%ld\n", sizeof (int) );
printf("%ld\n", sizeof (float) );


}