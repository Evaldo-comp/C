/*                                                                                                   *
*       (Calculadora de economia da faixa solidária) Pesquise vários sites sobre faixa solidária. Crie     *
*         um aplicativo que calcule o custo diário de dirigir, para estimar quanto dinheiro pode ser       *
*         economizado com o uso da faixa solidária, que também tem outras vantagens, como reduzir emissões * 
*         de carbono e congestionamento de tráfego. O aplicativo deve introduzir as seguintes informações e*
*         exibir o custo por dia de dirigir para o trabalho do usuário:                                    *
*                                                                                                          *
*         a) Quilômetros totais dirigidos por dia.                                                         *
*         b) Preço por litro de gasolina.                                                                  *
*         c) Quilômetros médios por litro.                                                                 *
*         d) Taxas de estacionamento por dia.                                                              *
*         e) Pedágio por dia 
*/


#include<stdio.h>

int main(){

float kmDia, valoGas, kmpLitro, estacioDia, pedDia, custDia;

printf("Digite quantos Quilômentros você dirige por dia");
scanf("%f", &kmDia); 

printf("Qual o valor da gazolina por litro");
scanf("%f", &valoGas);

printf("Quantos Quilômetros você faz em média com um litro de Gazolina?");
scanf("%f", &kmpLitro);

printf("Taxa diária de estacionamento");
scanf("%f", &estacioDia);

printf("Pedágio diário");
scanf("%f", &pedDia);

custDia = (kmDia /(kmpLitro * valoGas)) + estacioDia + pedDia;

printf("Custo Diário: R$ %.2f\n", custDia );
printf("Custo Semanal: R$ %.2f\n", custDia * 6 );
printf("Custo Mensal: R$ %.2f\n", (custDia * 6) * 4 );

	
}