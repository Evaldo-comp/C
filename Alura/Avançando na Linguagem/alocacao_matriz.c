#include<stdio.h>

int main(){
    int** mat;
    int linhas = 5;
    int colunas = 10;

    mat = malloc(sizeof(int*) * linhas);
    for (int i = 0; i < linhas; i++){
        mat[i] = malloc(sizeof(char) * (colunas + 1));
    }

    
}