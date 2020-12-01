/*
* Leia as coordenadas de dois pontos no plano cartesiano e imprima a distância entre 
* esse dois pontos. 
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
double x1 , x2 , y1 , y2 ;


printf("Insira as cordenadas nos pontos do eixo x\n");
scanf("%lf\n", &x1);
scanf("%lf", &x2);

printf("Insira as cordenadas nos pontos do eixo y\n");
scanf("%lf\n", &y1);
scanf("%lf", &y2);
printf("\n");
double distancia = (((x2 - x1)*(x2 - x1)) + ((y2 - y1) * (y2 - y1))) * 1/2;

printf("A distância entre os dois pontos, é %.2f: \n", distancia);

return 0;

}
