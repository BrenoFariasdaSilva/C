/*

3.5 Combine as instruções que você escreveu no Exercício 3.4
em um programa que calcule a soma dos inteiros de 1 a
10. Use a estrutura while para realizar um loop pelas
instruções de cálculo e incremento. O loop deverá terminar
quando o valor de x chegar a 11.

*/

#include <stdio.h>

int main()
{
    int soma = 0, x = 1;

    while ( x < 11)
    {
        soma += x;
        ++x;
    }
 
    printf("A soma é: %d", soma);

    return 0;
}
