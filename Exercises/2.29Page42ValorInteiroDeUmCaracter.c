//Valor Inteiro de um Caracter.


/*

2.29 Valor inteiro de um caractere. Vamos dar um passo
adiante. Neste capítulo, você aprendeu sobre inteiros e o
tipo int. C também pode representar letras maiúsculas,
letras minúsculas e uma grande variedade de símbolos
especiais. C usa inteiros pequenos internamente para representar
diferentes caracteres. O conjunto de caracteres
que um computador utiliza, juntamente com as representações
de inteiros correspondentes a esses caracteres,
é chamado de conjunto de caracteres desse computador.
Você pode imprimir o equivalente da letra A maiúscula,
por exemplo, executando a instrução
printf( “%d”, ‘A’ );
Escreva um programa em C que imprima os equivalentes
inteiros de algumas letras maiúsculas, letras minúsculas,
dígitos e símbolos especiais. No mínimo, determine os
equivalentes inteiros de A B C a b c 0 1 2 $ * +
/ e o caractere de espaço em branco.

*/

#include <stdio.h>

int main ()
{

    printf("%d\n", 'A');
    printf("%d\n", 'a');
    printf("%d\n", 'B');
    printf("%d\n", 'b');
    printf("%d\n", 'C');
    printf("%d\n", 'c');
    printf("%d\n", '0');
    printf("%d\n", '1');
    printf("%d\n", '2');
    printf("%d\n", '$');
    printf("%d\n", '*');
    printf("%d\n", '+');
    printf("%d\n", '/');

    return 0;
}
/*

CASO O CÓDGIO FOSSE: 

printf("%d\n", "A");

Ele iria imprimir a posição na memória(POINTERS).


*/