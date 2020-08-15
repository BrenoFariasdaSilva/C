/*

2.20 Diâmetro, circunferência e área de um círculo.
Escreva um programa que leia o raio de um círculo e
informe o diâmetro, a circunferência e a área do círculo.
Utilize o valor constante 3,14159 para p. Realize cada
um desses cálculos dentro das instruções printf e use
o especificador de conversão %f. [Nota: neste capítulo,
discutimos apenas constantes e variáveis inteiras. No Capítulo
3, discutiremos os números em ponto flutuante,
ou seja, valores que podem ter pontos decimais.]

*/

#include <stdio.h>
#include <math.h>

int main (void)
{
    float diametro, circunferencia, area, raio, pi=3.14159;
    printf("Insira o valor do raio do círculo: \n");
    scanf("%f", &raio);
    diametro = 2 * raio;
    circunferencia = 2 * pi * raio;
    area = pow(raio, 2) * pi;
    printf("O valor do diametro é: %f. \n", diametro);
    printf("O valor da circunferência é: %f. \n",  circunferencia);
    printf("O valor da área é: %f. \n", area);

    return 0;
}