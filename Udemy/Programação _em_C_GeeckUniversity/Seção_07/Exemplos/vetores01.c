#include <stdio.h>
// vetores

int main()
{   
    // vetor de string
    char nome[50];
    printf("qual o seu nome?");
    gets(nome);
    printf("Olá %s", nome);

    // vetor de caractere
    char letras[26];
    int contador = 0;
    for (int i = 97; i <= 192; i++){
        letras[contador] = i;
        contador = contador + 1;

    }

    for (int i = 0; i < 26; i++ ){
        printf("%d == %c\n", letras[i], letras[i]);
    }

  

    return 0;
}