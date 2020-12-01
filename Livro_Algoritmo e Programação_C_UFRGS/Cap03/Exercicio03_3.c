/*
* Dados três valores armazenados nas variáveis a, b, c, calcule e imprima as médias ariméticas,
*     geométrica e harmônica desses valores. Calcule também a média ponderada, considerando peso 1
*     para o primeiro valor, peso 2 para o segundo valor e peso 3 para o terceiro.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
double a, b, c, ma, mg, mh, mp ;


printf("digite três valoreso x\n");
scanf("%lf\n", &a);
scanf("%lf\n", &b);
scanf("%lf", &c);

ma = (a + b + c) / 3;
//mg = pow((a * b * c), 1.0/3.0);
mh = 3 / ((1/a) + (1/b) + (1/c));
mp = ((1*a) + (2*b) + (3*c))/ (1 + 2 +3);

printf("A Média Áritmética é %.2f: \n", ma);
printf("A Média Geométrica é %.2f: \n", mg);
printf("A Média Harmônica é %.2f: \n", mh);
printf("A Média Ponderada é %.2f: \n", mp);

}
