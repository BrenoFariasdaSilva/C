// Como separar os dígitos de um valor inteiro.
/*

2.30 Separando dígitos em um inteiro. Escreva um programa
que leia um número de cinco dígitos, separe o número
em dígitos individuais e imprima os dígitos separados um
do outro por três espaços cada um. [Dica: use combinações
da divisão inteira e da operação módulo.] Por exemplo, se o
usuário digitar 42139, o programa deverá exibir

*/

#include <stdio.h> <math.h>

int main ()
{
    int valor, DM, M, C, D, U;
    printf("Insira um valor de 5 dígitos: \n");
    scanf("%d", &valor);
    
    DM =  (valor / pow(10, 4));
    
    M = ((valor / pow(10, 3))- (DM * 10));

    C = (valor / 100 - (DM * 100 + M * 10 ));

    D = ((valor / 10) - (DM * 1000 + M * 100 + C * 10));

    U = (valor - (DM * 10000 + M * 1000 + C * 100 + D * 10));

    printf("O valor é: %d %d %d %d %d ", DM, M, C, D, U);
    return 0;
}