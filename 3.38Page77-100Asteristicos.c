/*

3.38 Escreva um programa que imprima 100 asteriscos, um de
cada vez. Após cada décimo asterisco, seu programa deverá
imprimir um caractere de nova linha. [Dica: conte de 1
até 100. Use o operador de módulo para reconhecer cada
vez que o contador atingir um múltiplo de 10.]

*/

#include <stdio.h>

int main()
{
    int counter=1;

    while (counter <= 100)
    {
        printf("*");

        if (counter % 10 == 0)
        {
            printf("\n");
        }

        ++counter;
    }
    return 0;
}
