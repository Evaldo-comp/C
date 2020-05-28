#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int  soma(int x, int y){

return x + y;
}




int main()
{
 int a, b;
 printf("digite um valor\n");
 scanf("%d", &a);

 printf("digite um segundo  valor\n");
 scanf("%d\n", &b);

printf("A soma é %d\n", soma(a, b));

printf("\n");

 
}