/*

5.10 Arredondando números. Uma das aplicações da função
floor é arredondar um valor para o inteiro mais
próximo. A instrução
y = floor( x + .5 );
arredondará o número x para o inteiro mais próximo e
atribuirá o resultado a y. Escreva um programa que leia
vários números e use o comando anterior para arredondar
cada um desses números para o inteiro mais próximo.
Para cada número processado, imprima o número
original e o número arredondado.

*/

#include <stdio.h> <stdlib.h> <time.h>

int main()
{
    float y, number;
    
    for (int i = 0; i < 3; i++)
    {
        number = srand(time(NULL));

        printf("Numero Original: %.2f \n", number);

        y = floor( number + .5 );

        printf("Numero Floor:%.2f \n\n", y);

    }
    return 0;
}
