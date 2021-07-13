/*

4.13 Calculando o produto de inteiros ímpares.
Escreva um programa que calcule e imprima o 
produto dos inteiros ímpares de 1 a 15.

*/

#include <stdio.h>

int main()
{
    int i, produto = 1;

    for (i = 1; i <= 15; i += 2)
    {
        produto *= i;
    }

    printf("O produto e: %d \n", produto);

    return 0;
}
