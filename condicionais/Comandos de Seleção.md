
### COMANDOS DE  SELEÇÃO
Antes de começarmos a falar dos comandos de seleção é importante entendermos que eles são um subgrupo de um conjunto maior,
os <strong>Comandos de Controle</strong>, que por sua vez é composto por um grupo dividido de acordo com o padrão ANSI.
________

- Seleção
  - if 
  - switch
- Iteração ou laço
  - while 
  - for
  - do-while
- Salto ou desvio
  - break 
  - continue 
  - goto 
  - return
- Rótulo
  - case 
  - default
_____
##### importante: 
>>Sentenças de expressões são expressões C válidas<br>
>>Sentenças de bloco  são blocos de códigos delimitados por {}
______


#### Comando de Seleção

<strong>if</strong> 
Estrutura
```c  
if(expressão) comando;
else comando;
```
O comando pode ser apenas um comando ou um bloco de instruções<br>
Se a expressão for verdadeira, ou seja, diferente de 0, o comando dentro do ***if*** será executado, caso contrário o bloco do ***else*** será executado.

> Importante: Evite utilizar número de ponto flutuante para controlar um comando condicional, pois esse tipo de dado afeta negativamente na velocidade de execução do código.

**Exemplo:**
```c
/* Programa de validação de acesso*/
#include <stdio.h>
#include<stdlib.h>

void main()
{
  int senha = 123;
  int tentativa; 

  printf(“Digite a senha numérica”);
  scanf(“%d”, &tentativa);

  if (tentativa == senha){
     printf(“Acesso liberado”);
  }
}
```


Incluindo o ***else*** conseguimos uma nova possibilidade de resolução caso o comando de controle do ***if*** seja falso.
```c
void main()
{
  int senha = 123;
  int tentativa; 

  printf(“Digite a senha numérica”);
  scanf(“%d”, &tentativa);

  if (tentativa == senha){
     printf(“Acesso liberado”);
     
     }
  else{
    printf(“Senha incorreta, acesso negado”);
  }
}

```
#### If Aninhado

Um ***if*** pode estar dentro de outro ***if*** assim como o ***else***, nesse caso o ***else*** sempre está referindo-se ao ***if*** mais próximo.
```c
if(expressão)
{
  if(expressão)comando;
  if(expressão)comando;
  else comando;
}
```



#### Escada if-else-if
Quando temos comandos ***if*** e ***else*** intercalados, a indentação forma uma escada, daí o nome, recomenda-se no máximo uma escada com 15 degraus, apesar de que muitas operações que necessitam dessa quantidade de decisões possam ser implementadas com outras opções como o ***while* ou *switch***
```c
if (expressão)comando;
   else
      if(expressão)comando;
        else
          if(expressão)comando;
.
.
.
else comando;
```
*A forma acima não está errada mas visualmente pode dificultar a leitura, então recomenda-se que utilize sem o recuo*. 
```c
if (expressão)comando;
else
if(expressão)comando;
else
if(expressão)comando;
.
.
.
else comando;
```
[Exemplo](https://github.com/Evaldo-comp/C/blob/master/condicionais/If_Else/Exemplo03.c)
______
______
#### Switch

O ***switch*** é um comando de múltiplas seleções, ele testa o valor de uma expressão comparando-o com uma constante,  se os dois coincidirem o comando associado a essa constante é executado.

**Estrutura** 
```c
switch(expressão){
case constante 1:
    sequência de comandos
    break
case constante 2:
    sequência de comandos
    break
case constante 3:
.    sequência de comandos
    break;
.
.
default:
    sequência de comandos
}
```
##### Importante
> - O comando switch só pode testar igualdades, diferente do if que pode testar expressões relacionais
> - Duas constantes case não podem ser idênticas dentro no mesmo switch
> - Quando caracteres são utilizados dentro do switch, eles são automaticamente convertidos para seus valores inteiros

##### switch Aninhado
Assim como o ***if***, comandos ***switch*** também pode ir dentro de outros comandos ***switch***.
```c
switch(c){
    case 1:
        switch(a){
            case 0: 
                printf(“ok”);
                break;
          }
          break;
}
```


### Comandos de iteração
Os comandos de iteração são laços que executam uma ou mais instruções uma quantidade vezes determinada pelo desenvolvedor, esse limite de execuções pode estar no início do bloco  como ocorre nos laços ***for*** e ***while*** ou no final como acontece no ***do-while***
<br>.
