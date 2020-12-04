/*

3.42 Diâmetro, circunferência e área de um círculo.
Escreva um programa que leia o raio de um círculo
(como um valor float) e calcule e imprima o diâmetro,
a circunferência e a área. Use o valor 3.14159 para p.

*/

#include <stdio.h> <math.h>

int main()
{
    float raio, circunferencia, area, diametro, pi = 3.15159;

    printf("Digite o valor do Raio: \n");
    scanf("%f", &raio);

    diametro = raio * 2;
    area = pow (raio, 2) * pi;
    circunferencia = 2 * pi * raio;

    printf("O Raio e: %.2f \n", raio);
    printf("O Diamentro e: %.2f \n", diametro);
    printf("A Circunferencia e: %.2f \n", circunferencia);
    printf("A Area e: %.2f \n", area);
    return 0;
}
