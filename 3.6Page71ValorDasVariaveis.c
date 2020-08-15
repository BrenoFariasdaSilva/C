/*

3.6 Determine os valores das variáveis produto e x depois
que o cálculo a seguir for realizado. Suponha que produto
e x tenham o valor 5 quando a instrução começar
a ser executada.
produto *= x++;

*/

#include <stdio.h>

int main()
{
    int produto = 5, X = 5;

    produto *= X++;

    printf("O valor do produto é: %d \n", produto);
    printf("O valor do X é: %d \n", X);
    return 0;
}
