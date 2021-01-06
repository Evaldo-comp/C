#include<stdio.h>
#include<stdlib.h>
#include "fogefoge.h"


char** mapa;
int linhas;
int colunas;

void lemapa(){
    FILE* f;
    f = fopen("mapa.txt", "r"); // abre o mapa em doc de texto apenas para leitura
    if (f == 0) {   // faz a verificação do arquivo, se estiver vazio, ele sai
        printf("Erro na leitura do mapa");
        exit(1);
    }

    // ler as linhas e colunas no mapa e guarda nas suas respectivas variáveis
    fscanf(f, "%d %d", &linhas, &colunas);
    alocamapa();   // call de função

    for(int i =0; i < 5; i++){
        fscanf(f, "%s", mapa[i]);
    }

    fclose(f);
}

//função para alocação dinâmica de memória

void alocamapa(){
    mapa = malloc(sizeof(char*) * linhas);

    for(int i = 0; i < linhas; i++){
        mapa[i] = malloc(sizeof(char) * colunas + 1);
    }
}

// função para liberar memória
void liberamapa(){
    for(int i = 0; i < linhas; i++){
        free (mapa[i]);
    }
    free(mapa);
}

// função principal
int main(){
    lemapa();

    for(int i = 0; i < linhas; i++){
        printf("%s\n", mapa[i]);
    }

    liberamapa();
}


