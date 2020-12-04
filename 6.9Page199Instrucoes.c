/*

6.9 Considere um array de inteiros t de 2 por 5.
a) Escreva uma definição para t.
T é um array que armazena valores do tipo int de 2 linhas por 5 colunas.

b) Quantas linhas t possui?

2

c) Quantas colunas t possui?

5

d) Quantos elementos t possui?

10 

e) Escreva os nomes de todos os elementos na segunda
linha de t.

t[1][0], [1][1], [1]2[], [1][3], [1][4], 

f) Escreva os nomes de todos os elementos na terceira
coluna de t.

Não há.

g) Escreva uma única instrução que defina o elemento
de t na linha 1, coluna 2, como zero.

t[1][2] = 0;

h) Escreva uma série de instruções que inicializem
cada elemento de t em zero. Não use uma estrutura
de repetição.

#include <stdio.h>

int main()
{
    int t[2][5] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    return 0;
}

i) Escreva uma estrutura for aninhada que inicialize
cada elemento de t em zero.

#include <stdio.h>

int main()
{
    int t [2][5];

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            t [i][x] = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("Array de %d vale: %d \n", i, t [i][x]);
        }
    }

    return 0;
}

j) Escreva uma instrução que insira os valores dos elementos
de t a partir do terminal.

#include <stdio.h>

int main()
{
    int t [2][5];

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            t [i][x] = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("Insira o valor do array: t[%d][%d] \n", i, t [i][x]);
            scanf("%d", &t[i][x]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("Array de [%d][%d] vale: %d \n", i, x, t [i][x]);
        }
    }

    return 0;
}


k) Escreva uma série de instruções que determinem e
imprimam o menor valor no array t.

#include <stdio.h>

void minimum (const int t[2][5]);

int main()
{
    int t [2][5];

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            t [i][x] = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("Insira o valor do array: t[%d][%d] \n", i, x);
            scanf("%d", &t[i][x]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("Array[%d][%d] vale: %d \n", i, x, t [i][x]);
        }
    }

    minimum (t);

    return 0;
}

void minimum (const int t[2][5])
{
    int menor = t[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (t[i][x] < menor)
            {
                menor = t[i][x];
            }
        }
    }

    printf("O menor valor e: %d\n", menor);
}

l) Escreva uma instrução que apresente os elementos
da primeira linha de t.

#include <stdio.h>

void firstline (const int t[2][5]);

int main()
{
    int t [2][5];

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            t [i][x] = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("Insira o valor do array: t[%d][%d] \n", i, x);
            scanf("%d", &t[i][x]);
        }
    }
    firstline (t);

    return 0;
}

void firstline (const int t[2][5])
{
    int menor = t[0][0];

    for (int i = 0; i <= 0; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("Array[%d][%d] vale: %d \n", i, x, t [i][x]);
        }
    }
}

m) Escreva uma instrução que some os elementos da
quarta coluna de t.

#include <stdio.h>

void firstline (const int t[2][5]);

int main()
{
    int t [2][5];

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            t [i][x] = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("Insira o valor do array: t[%d][%d] \n", i, x);
            scanf("%d", &t[i][x]);
        }
    }
    firstline (t);

    return 0;
}

void firstline (const int t[2][5])
{
    int menor = t[0][0], soma4coluna = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int x = 4; x <= 4; x++)
        {
            soma4coluna += t[i][x];
        }
    }
    printf("A soma dos elementos da 4 coluna vale: %d \n", soma4coluna);
}

n) Escreva uma série de instruções que imprimam o
array t em formato tabular. Liste os subscritos de
coluna como cabeçalhos no topo e liste os subscritos
de linha à esquerda de cada linha.

#include <stdio.h>

void tabela (const int t[2][5]);

int main()
{
    int t[2][5];

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            t[i][x] = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("Insira o valor do array: t[%d][%d] \n", i, x);
            scanf("%d", &t[i][x]);
        }
    }

    tabela (t);

    return 0;
}

void tabela (const int t[2][5])
{
    int menor = t[0][0];

    printf("%s\t%s\n", "Array:", "Valor:");

    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("[%d][%d]\t%d\n", i, x, t[i][x]);
        }

        printf("\n");
    }
}

*/

#include <stdio.h>

int main()
{
    int t[2][5] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    return 0;
}
