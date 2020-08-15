// Programa para cálculo do produto de 3 inteiros.
/* 2.5 Usando as instruções que você escreveu no Exercício 2.4,
escreva um programa completo que calcule o produto de
três inteiros.*/
// Programa de adição
/* Página 24, Como Programar em C, figura 2.5 */

#include <stdio.h>

int main()
{
    int x, y, z, resultado;

    printf:("Digite 3 numeros:");

    scanf("%d%d%d", &x, &y, &z);

    resultado = (x *y * z);

    printf("O produto é %d", resultado);

    return 0;
}
