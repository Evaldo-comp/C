
### Comandos de iteração

Os comandos de iteração são laços que executam uma ou mais instruções uma quantidade vezes determinada pelo desenvolvedor, esse limite de execuções pode estar no início do bloco  como ocorre nos laços <b>for</b> e <b>while</b> ou no final como acontece no <b>do-while</b>.
<br>.
#### Laço for

```for (inicialização; condição; incremento) comando```


```c
for (x = 100; x != 65; x-=5){
    z = x*x;
    printf(“O quadrado de %d, %f”, x z);
}
```
O x no código acima é o que chamamos de <b>controlador</b>, pois ele é testado a cada vez que o laço é executado, para verificar se ainda atende a condição de execução do bloco, quando essa condição não for mais verdadeira o laço deixa de ser executado.

#### Laços infinitos:

Os loops infinitos  ocorrem quando a condição limitante de execução da instrução dentro de um laço  nunca é alcançada ou simplesmente não existe.


```c
for (; ; ;) printf(“Pode sair pra tomar um café, esse trecho vai executar por toda a eternidade”)
```
<b>OBS:</b> *Os controladores do laço <b>for</b> não são obrigatórios, por isso eventos como o codigo acima, onde as condicionais do <b>for</b> simplismente não existem, pode ser utilizado para construir um loop infinito.*

#### Outro exemplo de loop infinito**
```c
#include <stdio.h>

int main()
{
    for (int x = 0; x<100;){
        printf("Laço infinito");
        
    }

    return 0;
}
```
_____
#### Laço while

o while executa um bloco ou comando se determinada condição for verdadeira. 

```while(condição) comando;```

O comando assim como no ***for***, pode ser vazio, comando simples ou um bloco delimitado por chaves.


```c
#include <stdio.h>

int main()
{
    int x = 0;
    while (x <10){
        printf("%d", x);
        x++;
    }
    
}
```
#### Repetição controlada por sentinela: <br/>
Algumas vezes o número de vezes que o loop deve ocorrer não é conhecido, então será necessário que o próprio usuário finalize o loop inserindo um valor para uma variável que chamamos de <b>Sentinela</b>. O valor sentinela irá interromper o laço, por isso devemos  tomar cuidado com o valor sentinela solicitado, ele não pode ser facilmente confundído com os valores originalmente solicitados pelo loop.
```c
nota =0;
while (nota >= 0){
    printf(Insira o valor da nota ou -1 para sair); //-1 é o valor sentinela
    
}
```
#### O laço do-while:

A principal diferença desse laço para os dois anteriores, é que esse faz o teste ao fim da execução, ou seja, ele sempre executa uma instrução a mais do que o limite predeterminado.


```
do{
    comando;
}while(condição);

```
```c
#include <stdio.h>

int main()
{
    char letra = "";
    do{
        
        scanf("%c", &letra);
    }while(letra !='A');
}
```
O programa acima irá solicitar uma letra do usuário até que ele digite A, enquanto não, a solicitação irá se repetir
_______

#### Desvios:

São comandos utilizados para realizar desvios incondicionais dentro do seu código.

#### return

O return é utilizado para retornar o valor de uma função, se a função não possui nenhum valor ele retorna apenas lixo indicado pelo número '0' como default.

**Estrutura** 

return *expressão*;

OBS: Não faz sentido colocar um return dentro de uma função void, tendo em vista que esta não retorna nada.

#### break

O break pode ser utilizado para terminar um laço antes que o limite estipulado pelo controlador seja alcançado.

**Exemplo:**
```c
#include <stdio.h>

int main()
{
    for(int x = 0; x< 100; x++){
        printf("%d", x);
        if(x == 50){
            break;
        }
        
    }
}
```
Esse código tem como limite o momento em que x alcança o valor 100, mas uma condicional acompanhada de um break irá parar o laço assim que o controlador valer 50, ou seja , na metade do caminho.

#### exit()

O exit funciona de forma semelhante ao ****break*** mas ao invés de finalizar um laço,ele finaliza o programa retornando ao Sistema Operacional, o código de erro que vai como parâmetro normalmente é o 0.

**Estrutura** 

void exit(*int codigo de retorno*);




