#include <stdio.h>
#include<stdlib.h>

int main(){


int linhas =3, colunas =3, i, j;

int **matriz;

printf("Digite o numero de linhas\n");
scanf("%d", &linhas);

printf("Digite o numero de colunas\n");
scanf("%d", &colunas);



//Alocando memória para linhas
matriz = (int **) malloc(linhas* sizeof(int *));

//alocando memória para as colunas
for (int i = 0; i < linhas; i++)
{
    matriz[i] = (int *) malloc(colunas * sizeof(int));
}

for(i = 0; i<linhas; i++){

    for(j = 0; j<colunas;j++){
        matriz [i][j] = i;
        printf("%d", matriz[i][j] );
    }
    printf("\n");
}

free(matriz);


}