#include <stdio.h>
#include<stdlib.h>

//Faça um programa que retorne ao usuaŕio se o número inserido é primo ou não

void main(){

int i, x ;
int div = 0;


do{

system("clear");
printf("Digite um número inteiro e positovo\n");
scanf("%d", &x);
}while(x<=0);

for (i = 1; i<=x; i++){
	if(x%i == 0){
		div++;
	}

}

if(div == 2){
	printf("O numero %d é primo\n", x );
}else{
	printf("O número %d não é primo\n", x );
}


	
}
