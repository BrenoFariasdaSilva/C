/*

4.18 Programa de exibição de gráfico de barras. Uma
aplicação interessante dos computadores é a de desenhar
gráficos e gráficos de barras (às vezes, chamados ‘histogramas’).
Escreva um programa que leia cinco números
(entre 1 e 30). Para cada número lido, seu programa
deverá exibir uma linha contendo esse número de asteriscos
adjacentes. Por exemplo, se seu programa ler o
número sete, ele deverá exibir *******.

*/

#include <stdio.h>

int main()
{
    int valor1, valor2, valor3, valor4, valor5;

    printf("Insira um valor: (De 1 a 30)\n");
    scanf("%d", &valor1);

    printf("Insira um valor: (De 1 a 30)\n");
    scanf("%d", &valor2);

    printf("Insira um valor: (De 1 a 30)\n");
    scanf("%d", &valor3);

    printf("Insira um valor: (De 1 a 30)\n");
    scanf("%d", &valor4);

    printf("Insira um valor: (De 1 a 30)\n");
    scanf("%d", &valor5);

    for (int i = 1; i <= valor1; i++)
    {
        printf("*");
    }

    printf("\n");
    
    for (int i = 1; i <= valor2; i++)
    {
        printf("*");
    }

    printf("\n");

    for (int i = 1; i <= valor3; i++)
    {
        printf("*");
    }

    printf("\n");

    for (int i = 1; i <= valor4; i++)
    {
        printf("*");
    }

    printf("\n");

    for (int i = 1; i <= valor5; i++)
    {
        printf("*");
    }

    printf("\n");
    
    return 0;
}
