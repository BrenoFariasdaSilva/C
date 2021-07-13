/*

2.19 Aritmética, maior e menor valor. Escreva um programa
que leia três inteiros diferentes do teclado, depois
apresente a soma, a média, o produto, o menor e o maior
desses números. Use apenas a forma de seleção única da
instrução if que você aprendeu neste capítulo. O diálogo
na tela deverá aparecer da seguinte forma:

*/


#include <stdio.h>

int main (void)
{
    int a, b, c, menor, maior, soma, media, produto;
    printf("Insira três valores: \n");
    scanf("%d%d%d", &a, &b, &c);
    soma = a + b + c;
    media = (soma / 3);
    produto = (a * b * c);
    printf("A soma dos valores é: %d \n", soma);
    printf("A media dos valores é: %d \n", media);
    printf("O produto dos valores é: %d \n", produto);
    menor = b;
    if (a < b)
    {
       menor = a;
    }

    if (c < menor)
    {
        menor = c;
    }
    maior = b;
    if (a > b)
    {
        maior = a;
    }
    if (c > maior)
    {
        maior = c;
    }
    printf("O menor valor é: %d \n", menor);
    printf("O maior valor é: %d \n", maior);

    return 0;
}

/* OU 
#include <stdio.h>

int main ()
{
    int a, b, c, menor, maior;
    printf("Insira três valores: \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("A soma dos valores é: %d \n", (a + b + c));
    printf("A media dos valores é: %d \n", ((a + b + c)/3));
    printf("O produto dos valores é: %d \n", (a * b * c));
    menor = b;
    if (a < b)
    {
       menor = a;
    }

    if (c < menor)
    {
        menor = c;
    }
    maior = b;
    if (a > b)
    {
        maior = a;
    }
    if (c > maior)
    {
        maior = c;
    }
    printf("O menor valor é: %d \n", menor);
    printf("O maior valor é: %d \n", maior);

    return 0;
}
*/