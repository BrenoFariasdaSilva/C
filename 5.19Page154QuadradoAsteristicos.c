/*

5.19 Exibindo um quadrado de asteriscos. Escreva uma
função que apresente um quadrado sólido de asteriscos
cujo lado é especificado no parâmetro inteiro side. Por
exemplo, se side é 4, a função exibe:
****
****
****
****
*/

#include <stdio.h>

void square (int side);
int main()
{
    int side;

    printf("Digite um valor: \n");
    scanf("%d", &side);

    square (side);

    return 0;
}

void square (int side)
{

    for (int i = 0; i < side; i++)
    {
        
        for (int i = 0; i < side; i++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}