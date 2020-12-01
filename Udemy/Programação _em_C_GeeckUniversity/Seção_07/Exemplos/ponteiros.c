#include <stdio.h>

int main(){
    int A, B, *C;
     C = &A;
    printf("Digite um número: ");
   scanf("%d", C);
    printf("Digite o segundo número");
    scanf("%d", &B);

    if (*C > B){   //utilizando o ponteiro no teste do if
        printf("%d \né maior/n", A );
    }else{
        printf("%d é maior/n", B);
    }
    return 0;
}