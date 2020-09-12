/*
imprimir o seguinte padrão com 8 printf e em seguida imprimir o mesmo padrão com a menor 
quantidade possível de printf
*/


#include<stdio.h>

int main(){
	char a[] = "* * * * * * * *";
	char b[] = " * * * * * * * *";
	
	//impressão com oito prints
	printf(" * * * * * * * *\n");
	printf("  * * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("  * * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("  * * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("  * * * * * * * *\n");

	printf("##########################\n");
	//Impressão com um único printf
	printf(" %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n", a, b, a, b, a, b, a, b);
	
	
}