#### 2.7 Identifique e corrija os erros em cada  uma das seguintes sentenças( OBS: pode haver mais do que um erro por sentença)

a) scanf( "&d", %value ); ***// Sinais & e % trocados***<br>
b) printf( "The sum of %c and %c is %c /n", x, y, ?); ***//falta uma variável***<br>
c) a + b + c = sum; ***// Variável vem na frente da operação***<br>
d) if ( number >= largest ); ***// Falta chaves para delimitar o bloco***<br>
largest == number;<br>
e) \\ Program to determine the largest of three integers  ***// Barra de comentários invertida***<br>
f)  scanf( "%f", float ); ***// Falta identificador de endereço &, float é palavra reservada***<br>
g) printf( "Remainder of %d divided by %d is \n", x, y, x / y ); ***// Está faltando um identificador dentro da string***<br>
h) if ( x => y ); ***// Falta chaves***<br>
      printf( "%d is greater than or equal to %d\n, x, y" ); ***// Variáveis devem ir fora das aspas***<br>
      
______
#### 2.8 Preencha os espaços em cada um dos seguintes itens.

a) Todos(as) ***variáveis*** devem ser declarados(as) antes de serem usados em um programa         
b) C é  ***case sensitive*** letras maiúsculas e minúsculas são diferentes em C<br>
c) Comentários de linha única, começam com ***//***<br>
d) ***Keywords***  são palavras reservadas por C, e não podem ser usadas<br>
e) ***tabs***   e  ***espaços*** são ignorados pelo compilador<br>

______

#### 2.9 Escreva uma declaração em C ou linha que resolva o que se pede em cada item.

a) Print a mensagem “ Tenha um ótimo dia.”<br>
```c
printf(“ Tenha um ótimo dia. ”);
```
b) Atribua a soma das variáveis b e c a variável a.<br>
```c
a = b + c ;
```
c) Cheque se o valor da variaǘel a é maior do que a variaǘel b. Se for, guardar a diferença entre as duas na variável c.
```c
if(a > b){
    c = a - b;        
    }
```
d) Entre com três valores inteiros a partir do teclado e os guarde nas seguintes variáveis. p, q e r.
```c#include<stdio.h>

int main(){

    int p, q, r;

    printf("Digite 3 números\n");
    scanf("%d%d%d", &p, &q, &r);

    printf("%d %d %d\n",p, q, r );

}
```

______
    
    
#### 2.10 Define como verdadeiro ou falso as sentenças abaixo, se for falso explique sua resposta.

a) em C, as funções main e Main são idênticas.

***R: Falso. C é case sensitive, ou seja, letras minúsculas são diferentes de letras maiúsculas.***
b) 

c) A sentença if (a = b) verifica se as variáveis a e b são iguais

***R: Falso. O sinal = é de atribuição, para igualdade usamos ==***

d) Condicionais em declarações if, são formados por operadores de atribuição

***R: Nas declarações if usa-se mais comumente operadores relacionais***

e) Todos estes  nomes de variáveis são válidos: _3g, my_val, h22, 123greetings, july98. 

***R: Variaveis em c não podem iniciar com números,  (‘123greetings” não seria aceito)***


______





