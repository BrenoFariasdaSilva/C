/*

5.3 Escreva um programa que teste se os exemplos das chamadas
de função da biblioteca matemática mostrados na
Figura 5.2 realmente produzem os resultados indicados.

*/

#include <stdio.h> 
#include <math.h>

int main(void)
{

    printf("%.2f \n", sqrt(10));
    printf("%.2f \n", exp(2));
    printf("%.2f \n", log(2));
    printf("%.2f \n", log10(2));
    printf("%.2f \n", fabs(-13.5));
    printf("%.2f \n", ceil(9.3));
    printf("%.2f \n", floor(9.3));
    printf("%.2f \n", pow(10, 10));
    printf("%.2f \n", fmod(12, 5));
    printf("%.2f \n", sin(0));
    printf("%.2f \n", cos(0));
    printf("%.2f \n", tan(0));

    return 0;
}
