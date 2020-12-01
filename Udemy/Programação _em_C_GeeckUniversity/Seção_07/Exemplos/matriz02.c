#include <stdio.h>
// matrizes = Arrays multi-dimensionais

int main()
{
    int numeros [2][2];
    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for (int i = 0; i < 2; i++){  
        for(int j = 0; j < 2; j++){
            printf("Números [%d][%d] vale %d\n", i, j, numeros[i][j]);
        }
    }
                        // Entrada de dados

    float valores [2][2];

    for (int i = 0; i < 2; i ++){
        for (int j = 0; j < 2; j++){
            printf("Digite um número: ");
            scanf("%f", &valores[i][j]);
        }
        
    }
                    // Saída de dados

    for(int i = 0 ; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("[%d][%d] = %.2f\n",i,  j, valores[i][j] );

        }
    }
    
    return 0;
}