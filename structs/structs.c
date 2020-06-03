#include<stdio.h>
#include<string.h>

struct palavra{
    int ordem;
    char letra;
    char texto[123];


};

int main()
{
	/* ccriando uma palavra*/

	struct palavra primeiraPalavra;
	
	primeiraPalavra.ordem = 1;
	primeiraPalavra.letra = 'E';
	strcpy(primeiraPalavra.texto, "palavra"); //Utilização da biblioteca strcpy para jogar a string dentro do vetor


	printf("Ordem: %d\n", primeiraPalavra.ordem );
	printf("Letra: %c\n", primeiraPalavra.letra );
	printf("Texto: %s\n", primeiraPalavra.texto );
	return 0;
}