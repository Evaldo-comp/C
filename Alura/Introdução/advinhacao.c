#include <stdio.h>
//#define NUMERO_TENTATIVAS 5  //constante
 int main(){

     // imprime o cabeçalho do jogo
     printf("*******************************************\n");
     printf("*  Bem vindo ao nosso jogo de Advinhação  *\n");
     printf("*******************************************\n");

     int numerosecreto = 42;
     int chute;
     int ganhou = 0;
     int tentativas = 1;

    while (1){
    
    //for(int i =1; i <=NUMERO_TENTATIVAS; i++){
    printf("Tentativa %d \n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0){
            printf("Vocênão pode chutar números neativos\n");
           
            continue; // continua na próxima iteração
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        //int menor = chute < numerosecreto;

        if(acertou)
        {
            printf("Parabéns! Você acertou!\n");
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
        
    }
    printf("Fim de Jogo\n") ;
    printf("Você acertou em %d Tentativas\n", tentativas );
    
 }