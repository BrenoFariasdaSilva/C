// Identificar se um número é Par ou Ímpar.
/*

2.24 Par ou ímpar. Escreva um programa que leia um inteiro,
determine e imprima se ele é par ou ímpar. [Dica:
use o operador módulo. Um número par é um múltiplo
de dois. Qualquer múltiplo de dois gera resto zero
quando dividido por 2.]

*/

#include <stdio.h>

int main (void)
{
    int valor;
    printf("Insira um valor: \n");
    scanf("%d", &valor);
    if( (valor % 2) == 0)
    {
        printf("O valor %d é par; \n", valor);
    }
    else
    {
    printf("O valor %d é ímpar; \n", valor);
    }
    return 0;
}

/*

#include <stdio.h>

int main (void)
{
    int valor;
    printf("Insira um valor: \n");
    scanf("%d", &valor);
    if( (valor % 2) == 0)
    {
        printf("O valor %d é par; \n", valor);
    }
    if( (valor % 2) != 0) 
    {
    printf("O valor %d é ímpar; \n", valor);
    }
    return 0;
}

*/