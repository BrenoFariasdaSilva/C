/*

5.28 Invertendo dígitos. Escreva uma função que leia um
valor inteiro e retorne o número com seus dígitos invertidos.
Por exemplo, dado o número 7631, a função deverá
retornar 1367.

*/

#include <stdio.h> <math.h>

int invertervalores (int valor);

int main()
{
    int valor, valorinvertido;

    printf("Digite um valor: \n");
    scanf("%d", &valor);

    valorinvertido = invertervalores (valor);

    printf("O valor %d invertido e %d", valor, valorinvertido);

    return 0;
}

int invertervalores (int valor)
{
    int divisor = 10000, valorinvertido = 0, algarismos, unidade;

    for (int i = 5; (valor / divisor) == 0; i--)
    {
        divisor /= 10;

        algarismos = i - 1;
    }

    for (int i = 0; i < algarismos; i++)
    {
        unidade = valor / divisor; 

        valorinvertido += (unidade * pow(10, i));

        valor -= unidade * divisor;

        divisor /= 10; 
    }

    return valorinvertido;
}