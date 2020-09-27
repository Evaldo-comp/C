### OPERADORES

Os operadores especialmente na linguagem C ganham uma importância mais elevada do que em outras linguagens, sua relevância deve-se as múltiplas funções atribuidas as esses elementos que em C são divididos em quatro tipos:

- Operadores Aritméticos
- Operadores Relacionais
- Operadores Lógicos
- Operadores bit a bit

Além dessas quatro classes ainda existem operadores especiais destinados a realizar funções especificas.

------------


#### OPERADORES ARITMÉTICOS

Estes operadores são utilizados para a realização de operações aritméticas, e assim como na matemática eles também possuem prioridades de execução. Os operadores Aritméticos em C são represetados da seguinte forma:

-  ( - )    Subtração ou menos unário

  ```c
int a , b, sub;
a = 10, b = a - 2;
sub = a - b; 
```

- ( + )    Adição
```c
int a , b, soma;
a = 10, b = a+2;
soma  = a + b; 
```
- ( * )    Multiplicação
```c
int a , b, mul;
a = 10, b = a*2;
mul  = a * b; 
```
- ( / )    Divisão
```c
int a , b, div;
a = 10, b = a/2;
div = a /b; 
```
- ( % ) Módulo
```c
int a , b, mod;
a = 10, b = 5;
mod  = a % b; 
```
- ( -- )    Decremento<br>
Operador unário que recebe apenas um operando
```c
int a = 10;
a--; //Se o operador de decremento for colocado antes da variável ele será chamado de pré-decremento(a variável é decrementada só depois exerce sua função)
```
- ( ++ )    Incremento<br>
Operador unário que recebe apenas um operando
```c
int a = 10;
a++; ////Se o operador de incremento for colocado antes da variável ele será chamado de pré-incremento(a variável é incrementada só depois exerce sua função)
```
