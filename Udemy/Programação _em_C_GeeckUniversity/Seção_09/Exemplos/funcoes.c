#include <stdio.h>


void mensagem(){
    printf("Bem-Vindo\n");
}

int soma(int n1, int n2){
    return n1 + n2;

}
//  função desloca binários para a esquerda
int bin(int n, int des){
    int bin_left = n << des;
    return bin_left;

}
int main(){
    mensagem();
    printf("%d\n",soma(2, 6));
    printf("%d\n", bin(4, 1));
}



