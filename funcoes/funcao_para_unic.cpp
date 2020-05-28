#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void  sucessor(int x){

int suc = x + 1;
printf("O seucessor é %d\n", suc );
}




int main()
{
 int a;
 printf("digite um valor\n");
 scanf("%d", &a);

sucessor(a);

 
}