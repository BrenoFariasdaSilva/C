/*

6.15 Eliminação de duplicatas. Use um array de subscrito
único para resolver o problema a seguir. Leia 20
números, cada um entre 10 e 100, inclusive. À medida
que cada número for lido, imprima-o apenas se ele não
for uma duplicata de um número já lido. Considere a
‘pior das hipóteses’: os 20 números são diferentes. Use o
menor array possível para resolver esse problema.

*/

#include <stdio.h>
#define SIZE 20

int linearSearch(const int intArray[SIZE], int key, int i);

int main()
{
    int intArray[SIZE], key, element;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor do array[%d]: (Valor de 10-100)\n", i + 1);
        scanf("%d", &intArray[i]);

        key = intArray [i];

        element = linearSearch (intArray, key, i);

        if (element == key)
        {
            printf("%d\n", key);
        }
    }
    return 0;
}

int linearSearch( const int intArray[SIZE], int key, int i)
{
    for (int x = 0; x < i; i++)
        {
            if (intArray[i] == key)
            {
                return 0;
            }
        }

    return key;
}