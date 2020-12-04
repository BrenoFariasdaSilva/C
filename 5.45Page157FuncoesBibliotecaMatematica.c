/*

5.45 Testando funções da biblioteca matemática. Escreva
um programa que teste o maior número possível
de funções de biblioteca da Figura 5.2. Exercite cada uma
dessas funções fazendo com que o programa imprima
tabelas de valores de retorno para uma diversidade de
valores de argumento.'

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x = 10, valorsqrt;
    
    printf("%s%21s\n", "Operacao:", "Valor:");
    for (int i = 1; i < 4; i++)
    {
        valorsqrt = sqrt(x * i);

        printf("%i%21f\n", i, valorsqrt);
    }


    return 0;
}

//Unfinished.

#include <stdio.h>
#include <math.h>
#define SIZE 10

int main()
{
    int c [SIZE];
    return 0;
}
