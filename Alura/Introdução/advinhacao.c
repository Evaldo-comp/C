#include <stdio.h>
#include<stdlib.h>
#include<time.h>
//#define NUMERO_TENTATIVAS 5  //constante
 int main(){

     // imprime o cabeçalho do jogo
     printf("*******************************************\n");
     printf("*  Bem vindo ao nosso jogo de Advinhação  *\n");
     printf("*******************************************\n");

    

     int numrand = rand();
     
     int chute;
     int tentativas = 1;
     int acertou = 0;
     double pontos = 1000;
     int nivel;

    int segundos = time(0);
     srand(segundos);
     int numerosecreto = numrand % 100;

     printf("Qual o nível de dificuldade?\n");
     printf("( 1 ) é Fácil, ( 2 ) é Médio, ( 3 ) é Difícil\n\n");
     printf("Escolha: ");
     scanf("%d", &nivel);


     int numerotentativas ;

     switch (nivel){
        case 1:
            numerotentativas = 20;
            break;
        case 2:
            numerotentativas = 15;
            break;
        default:
            numerotentativas = 6;
            break;
     }
   

    for  (int i = 1; i <= numerotentativas; i++){
    
        //for(int i =1; i <=NUMERO_TENTATIVAS; i++){
        printf("Tentativa %d \n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0){
            printf("Você não pode chutar números neativos\n");
            i--;
           
            continue; // continua na próxima iteração
        }

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        //int menor = chute < numerosecreto;

        if(acertou)
        {
            //printf("Parabéns! Você acertou!\n");
            break;
        }
        else if (maior)
        {
             printf("Você errou, seu chute foi Maior do que o número secreto!\n");
        }
        else{  
            printf("Você errou, seu chute foi Menor do que o número secreto!\n");
        }
        tentativas ++;
        double pontosPerdidos =  abs(chute - numerosecreto)/2.0;
        pontos = pontos -  pontosPerdidos;
        
    }
    printf("Fim de Jogo\n") ;
    if (acertou){
        printf("Você acertou em %d Tentativas\n", tentativas );
        printf("Total de pontos: %.2f\n", pontos);
        
    }else{
        printf("Você Perdeu\n");

    }
    
    
 }