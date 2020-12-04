/*

7.3 Resolva cada um dos itens a seguir. Suponha que os números
em ponto flutuante com precisão simples sejam
armazenados em 4 bytes, e que o endereço inicial do array
esteja no local 1002500 na memória. Cada parte do
exercício deverá usar os resultados das partes anteriores,
se isso for apropriado.

a) Defina um array do tipo float chamado numbers
com 10 elementos, e inicialize os elementos
com os valores 0.0, 1.1, 2.2, ..., 9.9. Suponha
que a constante simbólica SIZE tenha sido
definida como 10.

#include <stdio.h>
#define SIZE 10

int main()
{
    float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

    return 0;
}

b) Defina um ponteiro, nPtr, que aponte um objeto
do tipo float.

#include <stdio.h>
#define SIZE 10

int main()
{
    float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

    float *nPtr;
    
    return 0;
}

c) Imprima os elementos do array numbers utilizando
a notação de subscrito de array. Use uma
instrução for e suponha que a variável de controle
inteira i tenha sido definida. Imprima cada
número com 1 posição de precisão à direita do
ponto decimal.

#include <stdio.h>
#define SIZE 10

int main()
{
    float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

    float *nPtr;

    for (int i = 0; i < SIZE; i++)
    {
        printf("%.1f", numbers[i]);
    }
    
    return 0;
}

d) Indique duas instruções separadas que atribuam
o endereço inicial do array numbers à variável de
ponteiro nPtr.

float *nPtr = number;

Ou

float *nPtr = &numbers[0];

e) Imprima os elementos do array numbers usando a
notação ponteiro/deslocamento com o ponteiro nPtr.

for (int i = 0; i < SIZE; i++)
{
    printf("*(nPtr + %d) = %.1f \n", i, *nPtr++);
}

//Ou:
//for (int i = 0; i < SIZE; i++)
//{
//    printf("*(nPtr + %d) = %.1f \n", i, *(nPtr + i));
//} 

f) Imprima os elementos do array numbers usando a
notação de ponteiro/deslocamento com o nome de
array como ponteiro.

for (int i = 0; i < SIZE; i++)
{
    printf("*(nPtr + %d) = %.1f \n", i, *(numbers + i));
}

g) Imprima os elementos do array numbers subscritando
o ponteiro nPtr.

nPtr = numbers;    // Ou nPtr = &numbers[0];

    for (int i = 0; i < SIZE; i++)
    {
        printf("*(nPtr + %d) = %.1f \n", i, nPtr[i]);
    }

h) Faça referência ao elemento 4 do array numbers
usando a notação de subscrito de array, a notação
de ponteiro/deslocamento com o nome do array
como ponteiro, a notação de subscrito de ponteiro
com nPtr e a notação de ponteiro/deslocamento
com nPtr.

printf("%.1f \n", numbers[4]);
printf("%.1f \n", *(numbers + 4));
printf("%.1f \n", nPtr[4]);
printf("%.1f \n", *(nPtr + 4));

i) Supondo que nPtr aponte para o início do array
numbers, qual endereço é referenciado por nPtr
+ 8? Que valor é armazenado nesse local?

O endereço é 1002500 + 8 * 4 = 1002532.
O valor é 8.8.

j) Supondo que nPtr aponte para numbers[5], qual
endereço é referenciado por nPtr –= 4? Qual o
valor armazenado nesse local?

O endereço de numbers[ 5 ] é 1002500 + 5 * 4 = 1002520.
O endereço de nPtr -= 4 é 1002520 - 4 * 4 = 1002504.
O valor é 1.1.

*/


