#include <stdio.h>
// matrizes = Arrays multi-dimensionais

int main()
{
    char nome [3][50]; //três linhas com 50 colunas
    for(int i = 0; i < 3; i++)
    {
        printf("Qual o seu nome? ");
        gets(nome[i]);
    }   

    for (int i = 0; i < 3; i++)
    {
        printf("Olá %s\n", nome[i]);
    }
   return 0;
}