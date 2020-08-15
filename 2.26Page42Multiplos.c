//Identificar se números são múltiplos.

/*

2.26 Múltiplos. Escreva um programa que leia dois inteiros,
determine e imprima se o primeiro for um múltiplo do
segundo. [Dica: use o operador módulo.]

*/

#include <stdio.h>

int main (void)
{
    int a, b;
    printf("Insira dois valores: \n");
    scanf("%d%d", &a, &b);
    if ((a % b) == 0)
    {
        printf("O %d é múltiplo de %d\n", b, a);
    }
    if ((b % a) == 0)
    {
       printf("O %d é múltiplo de %d\n", a, b); 
    }
    else 
    {
       printf("Nenhum desses valores é múltiplo um do outro. \n"); 
    }

    return 0;
}