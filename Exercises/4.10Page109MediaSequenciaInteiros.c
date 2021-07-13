/*

4.10 Média de uma sequência de inteiros. 
Escreva um programa que calcule e imprima a média de vários inteiros.
Considere que o último valor lido com scanf seja a sentinela 9999.
Uma sequência de entrada típica poderia ser 10 8 11 7 9 9999
indicando que é preciso calcular a média de todos os valores anteriores
a 9999.

*/

#include <stdio.h>

int main()
{
    int sentinela = 9999, i = 0, valor = 0, soma = 0, media;

    while (valor != sentinela) 
    {
        printf("Insira um valor: (9999 para terminar)\n");
        scanf("%d", &valor);

        if (valor != 9999)
        {
            soma += valor;
            i++;
        }

    }

    media = soma / i;

    printf("A media e: %d", media);

    return 0;
}