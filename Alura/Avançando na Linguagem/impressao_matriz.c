#include<stdio.h>

int main(){
    int numeros [5][3], i, j;

    for(i = 0; i < 5; i++){
        for (j = 0; j <3; j++){
            printf("\nElemento[%d][%d] = ",i, j);
            scanf("%d", &numeros[i][j]);
        }
        printf("\n");

    }

    for( i =0; i<5;i++){
        for( j =0; j<3;j++){
            printf("\nElemento[%d][%d] = %d\n", i, j, numeros[i][j]);
        }
    }
}