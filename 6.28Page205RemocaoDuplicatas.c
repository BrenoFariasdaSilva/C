/*

6.28 Eliminação de duplicatas. No Capítulo 12, exploraremos
a estrutura de dados de árvore de pesquisa binária
de alta velocidade. Um dos recursos de uma árvore
de pesquisa binária é que os valores duplicados são descartados
quando são feitas inserções na árvore. Isso é
conhecido como eliminação de duplicatas. Escreva um
programa que produza 20 números aleatórios entre 1 e
20. O programa deverá armazenar todos os valores não
duplicados em um array. Use o menor array possível
para conseguir realizar essa tarefa.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int findrandNumber (const int randNumber, const int values[SIZE]);

int main()
{ 
    int values[SIZE], randNumber, key;

    srand (time(NULL));

    for (int i=0; i < SIZE; i++)
    {
        randNumber = 1 + rand () % 20;

        key = findrandNumber (randNumber, values);

        if (key == 0)
        {
            values[randNumber - 1] = randNumber;
        }

        else
        {
            i--;
        }

    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("Array[%d]: %d\n", i, values[i]);
    }

    return 0;
}

int findrandNumber (const int randNumber, const int values[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (values[i] == randNumber)
        {
            return -1;
        }
    }

    return 0;
}