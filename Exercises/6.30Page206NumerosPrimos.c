/*

6.30 O crivo de Eratóstenes. Um número inteiro primo é qualquer
inteiro maior que 1 que pode ser dividido apenas
por ele mesmo e por 1. O crivo de Eratóstenes é um método
para encontrar os números primos. Ele funciona da
seguinte maneira:
a) Crie um array com todos os elementos inicializados em
1 (verdadeiro). Os elementos do array com subscritos
primos permanecerão em 1. Todos os outros elementos
do array acabarão sendo definidos em zero.
b) Começando com o subscrito de array 2 (o subscrito
1 não é primo), toda vez que um elemento do array
cujo valor seja 1 for encontrado, percorra o restante
do array e defina em zero cada elemento cujo subscrito
seja um múltiplo do subscrito para o elemento
com valor 1. Para o subscrito de array 2, todos os
elementos no array, além de 2, que sejam múltiplos
de 2 serão definidos em zero (subscritos, 4, 6, 8,
10, e assim por diante). Para o subscrito de array
3, todos os elementos no array, além de 3, que são
múltiplos de 3 serão definidos em zero (subscritos
6, 9, 12, 15, e assim por diante).
Quando esse processo tiver sido concluído, os elementos do
array que ainda estiverem definidos em 1 indicarão que o subscrito
é um número primo. Escreva um programa que use um array
de 1000 elementos para determinar e exibir os números primos
entre 1 e 999. Ignore o elemento 0 do array

*/

#include <stdio.h>
#define SIZE 1000

int main()
{
    int primeNumbers[SIZE];

    for (int i=0; i < SIZE; i++)
    {
        primeNumbers[i] = 1;
    }




    return 0;   
}
