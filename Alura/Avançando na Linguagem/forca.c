#include<stdio.h>
#include<string.h>

void abertura(){
    printf("*******************************\n");
    printf("*         jogo de forca        *\n");
    printf("*******************************\n");

}

void chute(char chutes[26], int tentativas ){

        char chute;
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;
}

int main(){
    char palavrasecreta[20];

    sprintf(palavrasecreta, "Melancia");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

   abertura();

    do {
        
        for (int i = 0; i < strlen(palavrasecreta); i++){
            int achou = 0;
            //printf("Estou vendo a letra secreta %d %c\n", i, palavrasecreta[i]);
            for(int j = 0; j < tentativas; j++){
                if (chutes[j] == palavrasecreta[i]){
                   // printf("-----> Chute Correto\n");
                    achou = 1;
                    break;
                }
            } 
            if (achou){
                printf("%c ", palavrasecreta[i]);
            }else{
                printf("_ ");
            }
            
        }
        printf("\n");

       // captura novo chute
        chute(chutes, tentativas);
        

           
        
    }while (!acertou && !enforcou);
    
}