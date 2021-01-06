/*
Faça um programa que leia dois valores, o primeiro servindo de indicador da operação  e o segundo
correspondendo ao raio de um círculo. Caso o primeiro valor lido seja 1, calcular e imprimir a área 
desse círculo. Se o valor lido for 2, calcular e imprimir o perímetro do circulo. Se o valor lido 
for diferente desses  dois valores, imprimir uma mensagem dizendo que foi fornecido um indicador inválido.
*/


#include<stdio.h>
#define  PI 3.14  // definição de uma constante

int main(){
    int valor;
    double raio;

    printf("Selecione o indicador da operação que deseja realizar\n");
    printf("1: Área do círculo\n2: Perímetro do círculo\n");
    scanf("%d", &valor);

    printf("Agora informe a medida do raio do círculo\n");
    scanf("%lf", &raio);

    if(valor == 1){
        double area = PI * (raio * raio);
        printf("A área do círculo é %.2f\n", area);
    }else if(valor == 2){
        double per = 2 * (PI * raio); 
        printf("O perímetro do círculo é %.2f\n", per);
    }else{
        printf("Opção inserida inválida");
    }
}