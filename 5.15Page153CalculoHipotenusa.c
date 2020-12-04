/*

5.15 Cálculos de hipotenusa. Defina uma função chamada
hipotenusa que calcule o tamanho da hipotenusa
de um triângulo retângulo quando os outros dois lados
são conhecidos. Use essa função em um programa para
determinar o tamanho da hipotenusa de cada um dos triângulos
da tabela a seguir. A função deverá usar dois argumentos
do tipo double e retornar a hipotenusa como
um double. Teste seu programa com os valores de lado
especificados na Figura 5.18.

*/

#include <stdio.h> <math.h>

int main()
{
    float lado1, lado2, hipotenusa;

    printf("Digite o valor do lado1: \n");
    scanf("%f", &lado1);
    printf("Digite o valor do lado2: \n");
    scanf("%f", &lado2);

    hipotenusa =sqrt(pow(lado1, 2) + pow(lado2, 2));

    printf("A hipotenusa e: %.2f", hipotenusa);

    return 0;
}
