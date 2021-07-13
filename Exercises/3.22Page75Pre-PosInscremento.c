/*

3.22 Pré-incrementando versus pós-incrementando.
Escreva um programa que demonstre a diferença entre
pré-decrementar e pós-decrementar usando o operador
de decremento --.

*/

#include <stdio.h>

int main()
{
    int x=0;
    printf("insira um valor para \"X\":");
    scanf("%d", &x);

    printf("O valor de --x e: %d \n", --x);
    printf("O valor de x-- e: %d \n", x--);
    printf("O valor de x-- após a operação e: %d \n", x);
    return 0;
}
