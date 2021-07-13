/*

6.19 Lançando dados. Escreva um programa que simule
o lançamento de dois dados. O programa deverá
usar rand para lançar o primeiro dado, e deverá
usar rand novamente para lançar o segundo dado.
Em seguida, a soma dos dois valores deverá ser calculada.
[Nota: como cada dado pode mostrar um
valor inteiro de 1 a 6, então, a soma dos dois valores
variará de 2 a 12, com 7 sendo o resultado mais frequente;
e 2 e 12, os resultados menos frequentes.]
A Figura 6.23 mostra as 36 combinações possíveis
dos dois dados. Seu programa deverá lançar os dois
dados 36.000 vezes. Use um array de subscrito único
para contar o número de vezes em que cada resultado
possível aparece. Imprima os resultados em um
formato tabular. Além disso, determine se os resultados
são razoáveis; ou seja, existem seis maneiras
de somar um 7, de modo que um sexto de todas as
jogadas, aproximadamente, deverá ser 7.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 36000

void frequency(const int sumValues[SIZE]);

int main()
{
    int value1, value2, sumValues[SIZE];

    srand (time(NULL));

    for (int i = 0; i < SIZE; i++) //Gerar 36000 valores rand entre 1 e 6 para cada dado
    {
        value1 = 1 + rand() % 6;
        value2 = 1 + rand() % 6;

        sumValues[i] = value1 + value2; //Soma dos valores dos dados
    }

    frequency (sumValues);

    return 0;
}

void frequency(const int sumValues[SIZE])
{
    int i, x, frequency = 0;

    for (x = 2; x <= 12; x++) //Um loop para dar printf na frequencia da soma
    {
        for (i = 0; i < SIZE; i++) //Loop para verificar todos os dados do array
        {
            if (sumValues [i] == x) //Caso somadosvalores é igual ao valor de x, +1 na frquencia
            {
                frequency += 1; //Contador da frequência
            }
        }

        printf("Frequencia do Numero %d e: %d\n", x, frequency); //Frequencia da soma.
        frequency = 0;
    }
}