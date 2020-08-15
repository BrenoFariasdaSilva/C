/*

3.44 Lados de um triângulo. Escreva um programa que leia
três valores (float) diferentes de zero, determine e imprima
se eles poderiam representar os lados de um triângulo.

*/

#include <stdio.h>

int main()
{
    float l1, l2, l3, maior, medio, menor;

    printf("Insira o primeiro lado do triangulo: \n");
    scanf("%f", &l1);

    maior = l1;
    menor = l1;
    medio = l1;

    printf("Insira o segundo lado do triangulo: \n");
    scanf("%f", &l2);

    printf("Insira o terceiro lado do triangulo: \n");
    scanf("%f", &l3);

    if (l2 < menor)
    {
        menor = l2;

    }

    if (l3 < l2)
    {
        menor = l3;
    }

    if (l2 > maior)
    {
        maior = l2;

    }
    
    if (l3 > l2)
        {
            maior = l3;
        }

    if (l2 > l1 && l2 < l3)
    {
        medio = l2;
        
    }

    if(l3 > l1 && l3 < l2)
    {
        medio = l3;
    }

    if(l2 > l3 && l2 < l1)
    {
        medio = l2;
    }

    printf("Os lados do triangulo sao: %.2f, %.2f, %.2f", menor, medio, maior);
    return 0;
}
