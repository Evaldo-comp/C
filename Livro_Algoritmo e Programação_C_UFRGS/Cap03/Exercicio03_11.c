/*
*   Escreva um programa que lê o código de um vendedor (valor inteiro), o seu  salário
*   básico, o total de vendas por ele efetuadas em um mês e o percentual adicional que
*   deve ganhar relativo às comissões. Calcule o salário final desse vendedor. Apresente
*   o código do vendedor e o salário final.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>




void salarioFinal(int codVendedor, double salarioBasico, double totalVendas, int percentual){
    double salariofinal = salarioBasico + ((percentual/100)* totalVendas);
    printf("O funcionário de código %d, recebe o total de %.3f\n", codVendedor, salariofinal);
}

int main(){
    salarioFinal(12237, 1.234, 300.00, 40);
}


