/*

5.25 Achar o mínimo. Escreva uma função que retorne o
menor de três números em ponto flutuante.

*/

#include <stdio.h>

float menornumero (float valor1, float valor2, float valor3);

int main()
{
    float valor1, valor2, valor3, menor;

    printf("Digite um valor: \n");
    scanf("%f", &valor1);

    printf("Digite um valor: \n");
    scanf("%f", &valor2);

    printf("Digite um valor: \n");
    scanf("%f", &valor3);

    menor = menornumero (valor1, valor2, valor3);

    printf("O menor valor e: %.2f", menor);
    
    return 0;
}

float menornumero (float valor1, float valor2, float valor3)
{
    float menor;

    menor = valor1;

    if (valor2 < menor)
    {
        menor = valor2;
    }

    if (valor3 < menor)
    {
        menor = valor3;
    }

    return menor;
}
