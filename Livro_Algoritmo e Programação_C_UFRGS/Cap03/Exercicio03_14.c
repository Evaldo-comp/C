/*
* Um Hotel com 75 apartamentos deseja fazer uma promoção especial de fim de semana, concedendo
* um desconto de 25% de desconto na diária. Com isso, espera aumentar sua taxa de ocupação
* de 50 para 80%. Sendo dado o valor nomal da diária, calcule e imprima:
*  - O valor da diária promocional
*  - O valor total arrecadado com 80% de lotação e diária promocional
*  - O valor total arrecadado com 50% de lotação e diária normal
*  - A difenreça entre esses dois valores  
*/

#include<stdio.h>
 int main(){
     float diariaNormal;
     printf("Informe o valor da diária normal: ");
     scanf("%f", &diariaNormal);
     
     float diariaPromocional =  diariaNormal - (0.25* diariaNormal)  ;
     float arrecadacaoCom80 = (0.8 * 75) * diariaPromocional;
     float arrecadacaoCom50Normal = (0.5 * 75) * diariaNormal;


    printf("Diária Promocional: R$ %.f Reais\n", diariaPromocional);
    printf("Arrecadação em 80 por cento de Lotação: R$ %.2f Reais\n", arrecadacaoCom80);
    printf("Arrecadação em 50 por cento de Lotação e diária normal : R$ %.2f Reais\n", arrecadacaoCom50Normal);
    printf("A diferença entre a arrecadação normal e promocional é: R$ %.2f Reais\n", arrecadacaoCom80 - arrecadacaoCom50Normal);

 }