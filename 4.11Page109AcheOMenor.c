/*

4.11 Ache o menor. 
Escreva um programa que encontre o menor de vários inteiros. 
Considere que o primeiro valor lido especifique o número de valores restantes.

*/

#include <stdio.h>

int main()
{
    int valores, valor, menor;

    printf("Insira o numero de elementos: \n");
    scanf("%d", &valores);

    for (int i = 0; i < valores; i++)
    {
        printf("Insira o proximo valor: \n");
        scanf("%d", &valor);

        if ( i == 0 )
        {
            menor = valor;
        }

        if ( valor < menor )
        {
            menor = valor;
        }

    }

    printf("O menor valor e: %d \n", menor);
    return 0;
}
