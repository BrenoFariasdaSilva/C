/*

4.12 Calculando a soma de inteiros pares. 
Escreva um programa que calcule e imprima 
a soma dos inteiros pares de 2 a 30.

*/

#include <stdio.h>

int main()
{
    int i, soma = 0;

    for (i = 2; i <= 30; i += 2)
    {
        soma += i;
    }

    printf("A soma e: %d \n", soma);

    return 0;
}
