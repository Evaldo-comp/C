/*
Uma escola oferece um curso que prepara alunos para o exame estadual de licenciamento de corretores de imó-
veis. No último ano, dez dos alunos que completaram esse curso fizeram o exame de licenciamento. Naturalmente,
a escola quer saber como os alunos se saíram no exame. Você recebeu a missão de escrever um programa que
resuma os resultados. Você recebeu uma lista com os nomes dos dez alunos. Ao lado de cada nome, lê-se 1 se o
aluno passou no exame, ou 2, se o aluno foi reprovado.
Seu programa deve analisar os resultados do exame da seguinte forma:
1.	Forneça como entrada cada resultado do teste (isto é, 1 ou 2). Exiba a mensagem ‘Digite o resultado’ na tela cada
vez que o programa pedir outro resultado do teste.
2. Conte o número de resultados de teste de cada tipo.
3.	Exiba um resumo dos resultados de teste que indique o número de alunos que passaram e o número de alunos
que foram reprovados.
4. Se mais de oito alunos tiverem passado no exame, imprima a mensagem ‘Bônus para o instrutor!’
*/
#include<stdio.h>
int main(){
	int count =0;
	int result;
	int aprovado = 0, reprovado = 0; 


	while(count<10){
		printf("Digite o Resultado\n");
		scanf("%d", &result);

		if (result == 1){
			++aprovado;
		}else if (result ==2) {
			++reprovado;

		}else{
			printf("Valor inserido inválido: Insira 1 para Aprovado ou 2 para Reprovado\n");
		}
		count+=1;
	}
	if (aprovado > 8){
		printf("Alunos Aprovado(s): %d\n", aprovado);
		printf("Alunos Reprovado(s): %d\n", reprovado );
		if (aprovado > 8){
			printf("Bônus para Instrutor\n");
		}		}
	
}