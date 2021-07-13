/*

5.22 Separando dígitos. Escreva segmentos de programa
que realizem, cada um, o seguinte:
a) O cálculo da parte inteira do quociente quando o inteiro
a é dividido pelo inteiro b.

quociente = valor1 / valor2;

b) O cálculo do módulo inteiro quando o inteiro a é
dividido pelo inteiro b.

quociente = valor1 % valor2;

c) Use as partes do programa desenvolvidas em a) e b)
para escrever uma função que peça um inteiro entre
1 e 32767 e o imprima como uma série de dígitos,
com dois espaços entre cada dígito. Por exemplo, o
inteiro 4562 deverá ser impresso como:
4 5 6 2
*/


#include <stdio.h>

int main()
{
    int valor, divisor = 10000, unidade;

    printf("Digite um valor entre 1 e 32767: \n");
    scanf("%d", &valor);

    if (valor > 32767)
    {
        printf("Valor invalido! \n");
    }

    else
    {
        while ((valor / divisor) == 0) 
        {
            divisor /= 10;
        }

        for (divisor; divisor > 0; divisor /= 10)
        {
            unidade = valor / divisor;

            valor -= (unidade * divisor);

            printf("%d  ", unidade); 
        }
    }
    return 0;
}
