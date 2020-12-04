/*

7.9 Execute as tarefas requeridas para cada um dos itens a
seguir. Suponha que inteiros sem sinal sejam armazenados
em 2 bytes, e que o endereço inicial do array esteja
no local 1002500 da memória.

a) Defina um array do tipo unsigned int chamado
values com cinco elementos, e inicialize os elementos
para os inteiros pares de 2 a 10. Suponha
que a constante simbólica SIZE tenha sido definida
como 5.

unsigned int values[SIZE] = {2, 4, 6, 8, 10};

b) Defina um ponteiro vPtr que aponte para um objeto
do tipo unsigned int.

unsigned int *vPtr;

c) Imprima os elementos do array values usando a
notação de subscrito de array. Use uma estrutura for
e suponha que a variável de controle inteira i tenha
sido definida.

#include <stdio.h>
#define SIZE 5

int main()
{
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    unsigned int *vPtr;

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d \n", values[i]);
    }
     
    return 0;
}

d) Mostre duas instruções separadas que atribuam o
endereço inicial do array values para a variável de
ponteiro vPtr.

vPtr = &values[0];

Ou

vPtr = values;

e) Imprima os elementos do array values usando a
notação de ponteiro/deslocamento.

#include <stdio.h>
#define SIZE 5

int main()
{
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    unsigned int *vPtr = &values[0];

    // vPtr = &values[0];

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d \n", *(vPtr + i));
    }
     
    return 0;
}

f) Imprima os elementos do array values usando a
notação de ponteiro/deslocamento com o nome
de array como ponteiro.

#include <stdio.h>
#define SIZE 5

int main()
{
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    unsigned int *vPtr = &values[0];

    // vPtr = &values[0];

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d \n", *(values + i));
    }
     
    return 0;
}

g) Imprima os elementos do array values subscritando
o ponteiro para o array.

#include <stdio.h>
#define SIZE 5

int main()
{
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    unsigned int *vPtr = &values[0];

    // vPtr = &values[0];

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d \n", vPtr[i]);
    }
     
    return 0;
}


h) Consulte o elemento 5 do array values usando a
notação de subscrito de array, a notação de ponteiro/
deslocamento com o nome do array como ponteiro,
a notação de ponteiro/subscrito e a notação
de ponteiro/deslocamento.


values[4];
*(vPtr + 4);
vPtr[4];
*(values + 4)


i) Que endereço é referenciado por vPtr + 3? Que
valor é armazenado nesse local?

6422292 
8

j) Supondo que vPtr aponte para values[4], que
endereço é referenciado por vPtr -= 4? Que valor
é armazenado nesse local?

#include <stdio.h>
#define SIZE 5

int main()
{
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    unsigned int *vPtr;

     vPtr = &values[4];

    printf("%d \n", *(vPtr - 4));

    printf("%d \n", &vPtr[0]);

    return 0;
}

*/

#include <stdio.h>
#define SIZE 5

int main()
{
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    unsigned int *vPtr;

     vPtr = &values[4];

    printf("%d \n", *(vPtr - 4));

    printf("%d \n", &vPtr[0]);

    return 0;
}
