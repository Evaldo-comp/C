/*
*   Um produto comprado por um consumidor, tem um preço composto pelo seu preço de custo
*   (preço que a loja paga para a fábrica), adicionado de um precentual de lucro para a
*    loja, além de um percentual de impostos que a loja paga. Supondo que a percentagem
*    de lucro seja 28% do preço de custo e que os impostos sejam 25% sobre o preço de custo
*    ,escreva um algoritmo que calcule o preço que um consumidor deve pagar.
*    O algoritmo deve receber apenas o preço de custo do produto.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>




 float precoFinal(float precoCusto){
    
    float percentagemLucro = 0.28 * precoCusto;
    float  percentagemImpostos = 0.25 * precoCusto;
    return precoCusto + (percentagemImpostos + percentagemLucro);
 }


int main(){
    printf(" O valor final do produto é R$ %.2f Reais\n",precoFinal(200.00));
}


