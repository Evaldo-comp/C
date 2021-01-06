/*
 Leia três valores e armazene-os nas variáveis A, B, C. se todos forem positivos, calcule  e imprima
  a área do trapézio que tem A e B por base e C por altura.
*/


#include<stdio.h>
#define  PI 3.14  // definição de uma constante

int main(){
    double A, B, C;

   printf("informe três valores\n");
   scanf("%lf %lf %lf", &A, &B, &C);

  
    /*
    if (A > 0){
        if (B > 0){
            if(C > 0){
                double area = ((A + B) * C) / 2;
                printf("A área do Trapézio é %.2f:", area); 
            }else{
                printf("Não pode haver valor negativo entre os números informados");
            }
        }else{
            printf("Não pode haver valor negativo entre os números informados");
        }
    }else {
        printf("Não pode haver valor negativo entre os números informados");
    }
  */
   if ((A > 0) &&( B > 0) &&(C> 0 > 0)){
        double area = ((A + B) * C) / 2;
        printf("A área do Trapézio é %.2f:\n", area); 
   }else{
        printf("Não pode haver valor negativo entre os números informados\n");
   }
}