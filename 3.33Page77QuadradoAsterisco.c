/*

3.33 Quadrado de asteriscos. Escreva um programa que
leia o lado de um quadrado e depois exiba esse quadrado
a partir de asteriscos. Seu programa deverá funcionar
para quadrados de todos os tamanhos de lado entre 1 e
20. Por exemplo, se o programa ler um tamanho 4, ele
deverá exibir.
****
****
****
****


RESPOSTA:

#include <stdio.h>

int main()
{
    int lado, contador1=1, contador2=1;

    printf("Insira um valor: \n");
    scanf("%d", &lado);

    while ( contador1 <= lado )
    {
        while (contador2 <= lado)
        {
            printf("*");
            ++contador2;
        }

        contador2=1;
        
        printf("* \n");
        ++contador1;
    }
    return 0;
}

*/

#include <stdio.h>

int main()
{
    int lado, contador1=1, contador2=1;

    printf("Insira um valor: \n");
    scanf("%d", &lado);

    while ( contador1 <= lado )
    {
        while (contador2 <= lado)
        {
            printf("*");
            ++contador2;
        }

        contador2=1;

        printf("* \n");
        ++contador1;
    }
    return 0;
}
