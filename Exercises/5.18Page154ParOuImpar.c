/*

5.18 Par ou ímpar. Escreva um programa que inclua uma
série de inteiros e os passe um de cada vez à função
even, que usa o operador de módulo para determinar
se um inteiro é par. A função deverá usar um argumento
inteiro e retornar 1 se o inteiro for par, e retornar 0 se o
inteiro for ímpar.

*/

#include <stdio.h>

float even (int valor);

int main()
{
    int valor, result;

    printf("Digite um valor \n");
    scanf("%d", &valor);

    result = even (valor);

    if (result == 1)
    {
        printf("O numero %d e par. \n", valor);
    }

    else 
    {
        printf("O numero %d e impar. \n", valor);
    }

    return 0;
}

float even (int valor)
{
    int result;

    result = valor % 2;

    if (result == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}