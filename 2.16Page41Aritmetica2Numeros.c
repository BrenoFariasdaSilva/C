// Aritmética de dois números.
/*

2.16 Aritmética. Escreva um programa que peça ao usuário
que digite dois números, obtenha esses números e
imprima a soma, o produto, a diferença, o quociente e o
módulo (resto da divisão).

*/

#include <stdio.h>

int main ()

{
    int x, y;
    printf("Insira dois valores: \n");
    scanf("%d%d", &x ,&y);
    printf("A soma dos valores é %d\n", (x + y));
    printf("O produto dos valores é %d\n", (x * y));
    printf("A diferença dos valores é %d\n", ( x - y));
    printf("O quociente dos valores é %d\n", (x / y));
    printf("O módulo dos valores é %d\n", (x % y));

    return 0;
}