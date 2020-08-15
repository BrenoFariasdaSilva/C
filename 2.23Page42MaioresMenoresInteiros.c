// Identificar o Maior e Menor valor.

/*

2.23 Maiores e menores inteiros. Escreva um programa
que leia cinco inteiros e depois determine e imprima o
maior e o menor inteiro no grupo. Use apenas as técnicas
de programação que você aprendeu neste capítulo.

*/
#include <stdio.h>

int main (void)
{
    int a, b, c, d, e, menor, maior;
    printf("Insira cinco(5) valores: \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    maior = a;
    menor = a;
    if( b > maior)
    {
        maior = b;
    }

    if( c > maior)
    {
        maior = c;
    }

    if( d > maior)
    {
        maior = d;
    }

    if( e > maior)
    {
        maior = e;
    }

    if( b < menor)
    {
        menor = b;
    }
    if( c < menor)
    {
        menor = c;
    }
    if( d < menor)
    {
        menor = d;
    }
    if( e < menor)
    {
        menor = e;
    }
    printf("O Maior valor é: %d\n", maior);
    printf("o Menor valor é: %d\n", menor);
    return 0;
}