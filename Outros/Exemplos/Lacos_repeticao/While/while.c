#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>




void main(){

/*Exemplo 01
int a = 1;               // Inicializa a variável
int b =10;

while (a <= 10){      // Testa
printf("%d\n",a );   // Executa
a++;                // Modifica
                   //ITEM
}
printf("###########DECRESCENTE###################33\n");
while(b>0){
printf("%d\n",b );
b--;


}
*/
//Exemplo 2
char letra;
printf("Deseja continuar?\n");
scanf("%c", &letra);

letra = toupper(letra); // Converte a letra para maiúscula

while((letra!= 'S') && (letra !='N'))
{
	
	scanf("%c", &letra);
	letra = toupper(letra);
}
printf("sua resposta foi %c\n", letra );



}