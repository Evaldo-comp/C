#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> 
#include <time.h>//biblioteca necessária para gerar  números aleatórios

void main()
{
	setlocale(LC_ALL, "");

	srand((unsigned) time(NULL));  //Alimenta o range

	int randon = rand() % 12;

	printf("randon %d\n", randon);
	

}


