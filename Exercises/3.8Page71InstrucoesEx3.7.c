/*

3.8 Escreva um programa em C que use as instruções do Exercício
3.7 para calcular x elevado à potência y. O programa
deverá ter uma estrutura de controle de repetição while.

*/

#include <stdio.h>

int main()
{
    int potencia = 1, i = 1, x, y;
    printf("Insira o valor de X: \n");
    scanf("%d", &x);
    printf("Insira o valor de Y: \n");
    scanf("%d", &y);

    while (i <= y)
    {
        potencia *= x;
        ++i;
    }
    printf("O valor da variável Potência é: %d", potencia);

    return 0;
}
