#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Uma letra pode ser impressa na forma de inteiro, dessa forma o resultado será o seu código na tabela ASCII

void  main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto


	int n1, n2, opcao, soma, sub, mul, div ;
	  printf("Inssira dois valores\n");
	  scanf("%d %d", &n1, &n2);

	  printf("Escolha a operação que deseja executar\n");
	  printf("1 -- para Somar\n");
	  printf("2 -- para Subtrair\n");
	  printf("3 -- para Multiplicar\n");
	  printf("4 -- para Dividir\n");

	  
	  scanf("%d", &opcao);


	  switch(opcao){

	  	case 1:
	  		soma = n1 + n2;
	  		printf("A soma dos valores é: %d\n", soma );
	  		break;
	  	case 2:
	  		sub = n1 - n2;
	  		printf("A ssubtração dos valores é: %d\n", sub );
	  		break;
	  	case 3:
	  		mul = n1 * n2;
	  		printf("A Multiplicação dos valores é: %d\n", mul );
	  		break;
	  	case 4:
	  		div = n1 / n2;
	  		printf("A divisão dos valores é: %d\n", div);
	  		break;
	  	default:
	  		printf("opção inválidan");
	  }



	
	//Exemplo com IF  ELSE






}