### OPERADORES

Os operadores especialmente n alinguagem C ganhma uma importância mais elevada do que em outras linguagens, sua relevancia deve-se as mṕultiplas funções atribuidaas as esses elementos que em c são divididos em quatro tipos:

- Operadores Aritméticos
- Operadores Relacionais
- Operadores Lógicos
- Operadores bit a bit

Além dessas quatro classes ainda exsitem operadores especiais destinados a realizar funções especificas.

------------


####OPERADORES ARITMÉTICOS

Estes operdadores são utilizados para a realização de operações aritméticas, e assim como na matemática eles também possuem prioridades de execução. Os operadores Aritméticos em C são represetados da seguinte forma:

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
- ( -- )    Decremento
Operador unário que recebe apenas um operando
```c
int a = 10;
a = a - 1; //também pode ser escrito a-- ou --a
```
- ( ++ )    Incremento
Operador unário que recebe apenas um operando
```c
int a = 10;
a = a + 1; //também pode ser escrito a++  ou ++a
```
