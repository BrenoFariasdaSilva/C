/*

3.25 Saída tabular. Escreva um programa que use o looping
para imprimir a tabela de valores a seguir. Use a sequência
de escape de tabulação, \t, na instrução printf para separar
as colunas com tabulações.

N 10*N 100*N 1000*N
1 10 100 1000
2 20 200 2000
3 30 300 3000
4 40 400 4000
5 50 500 5000
6 60 600 6000
7 70 700 7000
8 80 800 8000
9 90 900 9000
10 100 1000 10000

*/

#include <stdio.h>

int main()
{
    int n = 1;

    printf("N \t 10*N \t 100*N \t 1000*N \n \n");

    while ( n <= 10)
    {
        printf("%d \t %d \t %d \t %d \n", n, 10*n, 100*n, 1000*n);
        ++n;
    }

    return 0;
}
