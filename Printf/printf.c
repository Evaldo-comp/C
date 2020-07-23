#include<stdio.h>
#include<stdlib.h>

/* A função printf imprime uma saída de dados,seja texto, número, ponteiro e etc. 
Para que seja exibido o valor de uma vári[avel, precisaremos utilizar os especificadores,
cada tipo de dado possui o seu especificador*/

// Imprimindo int %d

int main(){
int a = 12;
int neg_a = -12;
unsigned int n = 42000;
long int n2 = 1000000;
float b =1.2, b_2 = 12.1233121;
char c = 'A';
char str [255]= "String de caractere";
int c1, c2;


//Imprimindo valor do tipo int %d
printf("Esse é um dados inteiro: %d\n", a );

//Imprimindo valor do tipo float %f
printf("Esse é um dado float: %f\n", b );

//Imprimindo valor do tipo char %c
printf("Esse é um dado char: %c\n", c );

//Imprimindo uma string de caracteres %s
printf("A string de caracteres é: %s\n", str );

//imprimindo o valor octal %o
printf("O valor Octal de %d é: %o\n", a,a );

//Imprimindo o valor Hexadecimal minúsculo e maiúsculo %x %X
printf("O valor Hexadecimal de %d é: %x ou %X \n", a,a,a );

//Imprimindo unsigned int %u
printf("Exibindo 43000 como unsigned %u\n", n );

//printf("\033[46m"); //altera a cor da tela de fundo

//Imprimindo long int %ld
printf("Exibindo 1000000 como long int %ld\n", n2 );

//Imprimindo um endereço de ponteiro %p
printf("Exibindo o endereço de ponteiro da variável 'a' %p\n", &a );

//Imprimindo o número com o seus respectivo sinal %+d
printf("A variável positiva é %+d e a negativa é %+d \n", a, neg_a );

//Formatando as saidas com aproximação e quantidade de algarismos

//Alterando a quantidade mínima de algarismos
printf("%3d\n", a);  //Coloca um espaço com um algarismo a mais
printf("%06d\n", a);  //Coloca zeros como algarismos a mais

/*Formatando dados de ponto flutuante
O primeiro número é a quantidade mínima de algarismos,
o segundo, após o ponto, é a quantidade de algarismos após o ponto.*/
printf("%0.3f\n",  b_2);

// Quebrando uma string para continuar a ser exibida em outra linha  (  \ )
printf("s simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's \
 standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it \
 to make a type specimen book.\n" );

//Contanto a quantidade de  caracteres que determinado trecho do print possui:
//O %n pega a quantidade de caracteres e joga em um ponteiro
printf("Conta%n a quantidade de caracteres%n de um determinado trecho do print\n", &c1, &c2 ); 
printf("O primeiro trecho tem  %d e o segundo possui %d caracteres\n", c1, c2);
}

