/*

5.6 Escreva uma declaração para cada um dos seguintes itens:
a) Inteiro count que deve ser mantido em um registrador.
Inicialize count em 0.

register int counter = 0;

b) Variável de ponto flutuante lastVal que deve reter
seu valor entre as chamadas para a função em
que é definida.

static float lasVal;


c) Inteiro externo number cujo escopo deve ser restringido
ao restante do arquivo em que está definido.

static int number;

*/

#include <stdio.h> <math.h>

int main()
{
    register int counter = 0;

    static float lasVal;

    static int number;

    return 0;
}
