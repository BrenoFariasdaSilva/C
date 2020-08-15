/*

3.41 Múltiplos de 2 com um loop infinito. Escreva um programa
que continue imprimindo os múltiplos do inteiro 2,
a saber 2, 4, 8, 16, 32, 64 e assim por diante. Seu loop não
deverá terminar (ou seja, você deverá criar um loop infinito).
O que acontece quando você executa esse programa?

*/

#include <stdio.h>

int main()
{
    int counter = 0, number=2, multiplicador = 0;

    while (counter < 1)
    {
        printf("%d \n", number * multiplicador);
        multiplicador++;
    }
    
    return 0;
}
