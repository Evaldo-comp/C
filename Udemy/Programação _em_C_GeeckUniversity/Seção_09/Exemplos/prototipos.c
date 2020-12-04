#include<stdio.h>

// prototipo de função
// Assinatura da função ( tipo de retorno, nome e parâmentros de netrada)
int soma(int num1, int num2);



int main(){
    int n1, n2, ret;

    printf("Informe o Primeiro número: ");
    scanf("%d", &n1);

    printf("Informe o Segundo número: ");
    scanf("%d", &n2);

    ret = n1 + n2;

    printf("%d + %d = %d\n",n1, n2, ret);
    printf("%d\n", soma(n1, n2));
}

int soma(int num1, int num2){
    return num1 + num2;
}

