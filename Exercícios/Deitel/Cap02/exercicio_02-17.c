
/*
2.17 (Velocidade Final)- Escreva um programa que peça ao usuário uma velocidade inicial
 e aceleração de uma objeto e o tempo decorrido, guarde esses valores nas variáveis u,a e t e 
 imprima a velocidade final em v e a distância percorrida em s, usando as seguintes equações:
 a) v = u + at
 b) s = ut + 1 /2  at²

*/
#include<stdio.h>
int main(){

	int v, a, t, s, u;

	printf("Insira a velocidade inicial do obejto\n");
	scanf("%d", &u);


	printf("Insira a aceleração do obejto\n");
	scanf("%d", &a);


	printf("Insira o tempo decorrido\n");
	scanf("%d", &t);

	printf("Velocidade final: %dKm/h\n", u + (a * t)) ;
	printf("Distância percorrida: %d Km\n", (u * t) + (1/2 * (a*(t*t))) );

}


