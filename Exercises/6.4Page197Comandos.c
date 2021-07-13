/*

6.4 Escreva comandos que realizem as seguintes tarefas:
a) Definam table como um array de inteiros com 3
linhas e 3 colunas. Suponha que a constante simbólica
SIZE tenha sido definida como 3.

#define SIZE 3

int table [SIZE][SIZE];

b) Quantos elementos o array table contém? Imprima
o número total de elementos.

printf("table[%d] \n", SIZE * SIZE);

c) Use uma estrutura de repetição for para inicializar
cada elemento de table como a soma de seus
subscritos. Suponha que as variáveis inteiras x e y
sejam definidas como variáveis de controle.

for (int x = 0; x < SIZE; x++)
{
    for (int y = 0, y < SIZE; y++)
    {
        table [x][y] = x + y;
    }
}

d) Imprima os valores de cada elemento do array table.
Suponha que o array tenha sido inicializado
com a definição:
int table[ SIZE ][ SIZE ] =
{ { 1, 8 }, { 2, 4, 6 }, { 5 }
};

printf("Table [%d][%d] = %d \n", x, y, table [x][y]);

*/

#include <stdio.h>

int main()
{
    
    return 0;
}
