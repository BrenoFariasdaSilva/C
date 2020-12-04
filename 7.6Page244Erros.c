/*

7.6 Encontre o erro em cada um dos segmentos de programa
a seguir. Considere:

int *zPtr; // zPtr referenciará o array z 
int *aPtr = NULL;
void *sPtr = NULL;
int number, i;
int z[ 5 ] = { 1, 2, 3, 4, 5 };
sPtr = z;

a) ++zptr;

RESPOSTA: zPtr não foi inicializado.

FIX:
zPtr = z;
++zptr;

b)//usa o ponteiro para obter o primeiro valor do array;
//suponha que zPtr seja inicializado 
number = zPtr;

RESPOSTA: Esse é o endereço do Ponteiro, e não o valor

FIX:
number = zPtr;

c)//atribui o elemento do array 2 (o valor 3) a number;
//suponha que zPtr seja inicializado
number = *zPtr[ 2 ];

RESPOSTA: zPtr não é um ponteiro.

FIX:
zPtr[ 2 ];

d)//imprime array z inteiro; 
//suponha que zPtr seja inicializado 
for ( i = 0; i <= 5; i++ ) 
{
    printf("%d \n"", zPtr[ i ]);
}

RESPOSTA: Está fora dos limites do array.

FIX:
for ( i = 0; i < 5; i++ ) 
{
    printf("%d \n"", zPtr[ i ]);
}

e)//atribui o valor apontado por sPtr a number
number = *sPtr;

RESPOSTA: Desreferenciar um ponteiro void.

FIX:
Para desreferenciar o ponteiro, ele primeiro
precisa ser convertido para um ponteiro inteiro.
Mude a instrução para: 
number = *( ( int * ) sPtr );

f) ++z;

RESPOSTA:
Tentar modificar um nome de array com aritmética
de ponteiro.

FIX:
Use uma variável de ponteiro em vez do
nome do array para realizar a aritmética de ponteiro,
ou crie um subscrito do nome do array para se referir
a um elemento específico.

*/

#include <stdio.h>

int main()
{
    
    return 0;
}
