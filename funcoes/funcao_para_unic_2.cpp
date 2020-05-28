#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void  parImpar(int x){

if (x%2 ==0){
	printf("O numero fornecido é par\n");
}else{
	printf("O número fornecido é impar\n");
}
}


int returnAnt(int x){
	return x -1;
}

int returnSuc(int x){
	return x + 1;
}





int main()
{
 int a;
 printf("digite um valor\n");
 scanf("%d", &a);

parImpar(a);
printf("Antecessor: %d\n",returnAnt(a));
printf("Sucessor: %d\n",returnSuc(a));
 
}