/*

6.8 Escreva instruções que realizem as seguintes tarefas:
a) Exibam o valor do sétimo elemento do array de caracteres
f.

printf("%s", f[6]);

b) Incluam um valor no elemento 4 do array de ponto
flutuante com o subscrito único b.

flaot a [3]  = {b};

c) Inicializem cada um dos cinco elementos do array
de inteiros com o subscrito único g em 8.

#include <stdio.h>

int main()
{
    int g [5] = {8};

    for (int i = 0; i < 5; i++)
    {
        g [i] = 8;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Array de %d vale: %d \n", i, g [i]);
    }

    return 0;
}

d) Somem os elementos do array de ponto flutuante c
de 100 elementos.

#include <stdio.h>

int main()
{
    int g [100], total = 0;

    for (int i = 0; i < 100; i++)
    {
        g [i] = 8;
    }

    for (int i = 0; i < 100; i++)
    {
        total +=  g [i];
    }

    printf("Total: %d \n", total);

    return 0;
}

e) Copiem o array a na primeira parte do array b. Considere
double a[11], b[34];

f) Determinem e imprimam o menor e o maior valor contidos
no array de ponto flutuante com 99 elementos w.

*/
