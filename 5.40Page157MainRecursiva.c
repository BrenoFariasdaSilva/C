/*

5.40 main recursiva. main pode ser chamada recursivamente?
Escreva um programa que contenha uma função main.
Inclua a variável local static count inicializada como 1.
Pós-incremente e imprima o valor de count cada vez que
main for chamada. Execute seu programa. O que acontece?

*/

#include <stdio.h>

int main()
{
    static count = 1;
    count++;

    int main ();

    printf("%d\n", count);

    return 0;
}
