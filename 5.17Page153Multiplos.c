/*

5.17 Múltiplos. Escreva uma função multiple que determine
para um par de inteiros, se o segundo inteiro é um
múltiplo do primeiro. A função deve apanhar dois argumentos
inteiros e retornar 1 (verdadeiro), se o segundo
for um múltiplo do primeiro, e 0 (falso), caso contrário.
Use essa função em um programa que inclua uma série
de pares de inteiros.

*/

#include <stdio.h>

float multiple(int valor1,int valor2);
int resultado;

int main()
{
    int valor1, valor2;

    printf("Digite o valor1: \n");
    scanf("%d", &valor1);
    printf("Digite o valor2: \n");
    scanf("%d", &valor2);

    multiple (valor1, valor2);

    if (resultado == 0)
    {
        printf("%d e multiplo de %d", valor2, valor1);
    }

    else 
    {
        printf("%d nao e multiplo de %d", valor2, valor1);
    }

    return 0;
}

float multiple(int valor1,int valor2)
{
    resultado = valor1 % valor2;

    return resultado;
}
