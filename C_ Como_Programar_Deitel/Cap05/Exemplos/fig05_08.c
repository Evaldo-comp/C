#include <stdio.h>
#include<stdlib.h>

int main()
{
    int frequencia1 = 0; // contador de lançamento 1
    int frequencia2 = 0; // contador de lançamento 2
    int frequencia3 = 0; // contador de lançamento 3
    int frequencia4 = 0; // contador de lançamento 4
    int frequencia5 = 0; // contador de lançamento 5
    int frequencia6 = 0; // contador de lançamento 6

    int roll; // contador de lançamento de 1 a 1000
    int face; // valor de uma dado lançado de 1 a 6

    // loop 6000 vezes
    for (roll = 1; roll <= 6000; roll++){
        face = 1+rand() % 6;  // aleatório de 1 a 6

        // determina o valor da face
        switch (face)
        {
        case 1:
            ++frequencia1;
            break;
        case 2:
            ++frequencia2;
            break;
        case 3:
            ++frequencia3;
            break;
        case 4:
            ++frequencia4;
            break;
        case 5:
            ++frequencia5;
            break;
        case 6:
            ++frequencia6;
            break;
        }
    }

    // exibição do resultado em formato tabular
    printf("%s%13s\n", "Face", "Frequência");
    printf("   1%13d\n", frequencia1);
    printf("   2%13d\n", frequencia2);
    printf("   3%13d\n", frequencia3);
    printf("   4%13d\n", frequencia4);
    printf("   5%13d\n", frequencia5);
    printf("   6%13d\n", frequencia6);
    return 0;

   

    
    
   
}