/*

3.47 Calculadora de crescimento populacional mundial.
Use a Web para determinar a população mundial
atual e sua taxa de crescimento anual. Escreva uma
aplicação que leia esses valores, depois apresente a população
mundial estimada após um, dois, três, quatro e
cinco anos.

*/

#include <stdio.h> <math.h>

int main()
{
    float populacao, tempo;

    int populacaomundial;

    printf("Digite a população mundial atual: \n");
    scanf("%f", &populacao);

    printf("Digite o tempo (em anos): \n");
    scanf("%f", &tempo);

    populacaomundial = (populacao * pow(1.02, tempo));

    printf("A população mundial e: %d", populacaomundial);

    return 0;
}
