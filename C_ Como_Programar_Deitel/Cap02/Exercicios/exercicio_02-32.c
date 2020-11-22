/*

(Calculadora de índice de massa corporal) Escreva um programa que calcule o IMC do usuário e       *
*		retorne uma mensagem classificando-o de acorod com os dados                                        *
*		Fórmula - IMC = peso/altura * altura                                                               *
*		Menos do que 18,5 	Abaixo do peso                                                                 *
*		Entre 18,5 e 24,9 	Peso normal                                                                    *
*		Entre 25 e 29,9 	Sobrepeso                                                                      *
*		Entre 30 e 34,9 	Obesidade grau 1                                                               * 
*		Entre 35 e 39,9 	Obesidade grau 2                                                               *
*		Mais do que 40 	Obesidade grau 3  
*/


#include<stdio.h>

int main(){
  float altura, peso, imc;

  printf("Digite o seu peso: \n");
  scanf("%f", &peso);

  printf("Digite o sua altura: \n");
  scanf("%f", &altura);

  imc = peso/(altura * altura);

  if (imc < 18.5){
  	printf("IMC = %.2f: Abaixo do Peso \n", imc );
  }else if (imc >=18.5 &&  imc  < 24.9){
  	printf("IMC = %.2f: Peso normal \n", imc );
  }else if(imc >= 24.9 && imc < 29.9){
  	printf("IMC = %.2f: Sobrepeso \n", imc );
  }else if (imc >= 29.9 && imc <34.9){
  	printf("IMC = %.2f: Obesidade grau 1 \n", imc );
  }else if (imc >= 34.9 && imc < 39.9){
  	printf("IMC = %.2f: Obesidade grau 2 \n", imc );
  }else{
  	printf("IMC = %.2f: Obseidade grau 3 \n", imc );
  }

	
}