/*

5.29 Máximo divisor comum. O máximo divisor comum
(MDC) de dois inteiros é o maior inteiro que divide cada
um dos dois números sem deixar resto. Escreva a função
mdc que retorna o máximo divisor comum de dois inteiros.

*/

#include <stdio.h>

int mdc (int valor1, int valor2);

int main()
{
    int valor1, valor2, valormdc;

    printf("Digite dois valores. \n");
    scanf("%d%d", &valor1, &valor2);

    valormdc = mdc (valor1, valor2);

    printf("O MDC entre %d e %d e: %d", valor1, valor2, valormdc);
    return 0;
}

int mdc (int valor1, int valor2)
{
    int valormdc, maiorvalor;

    maiorvalor =  valor1;

    if (valor2 > valor1)
    {
        maiorvalor = valor2;
    }

    for (int i = 1; i < maiorvalor; i++)
    {
        if ((valor1 % i == 0) && (valor2 % i == 0))
        {
            valormdc = i;
        }
    }

    return valormdc;
}