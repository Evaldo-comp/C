/*
* Escreva um programa que calcule a resistência equivalente(Re) de um circuito elétrico
*     composto de três resistores R1, R2, R3, ligados em paralelo. Os valores dos resistores
*     deverão ser lidos pelo programa.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
double re, r1, r2, r3;


printf("Digite os valores das três resistências\n");
scanf("%lf\n", &r1);
scanf("%lf\n", &r2);
scanf("%lf", &r3);




printf("a resistência Equivalente é %.2f: \n",((r1 * r2 * r3) / (r1+ r2 + r3)));


}
