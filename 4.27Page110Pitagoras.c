/*

4.27 Triplas de Pitágoras. Um triângulo retângulo pode
ter lados que são valores inteiros. O conjunto de três valores
inteiros para os lados de um triângulo retângulo é
chamado de tripla de Pitágoras. Esses três lados precisam
satisfazer o relacionamento de que a soma dos quadrados
de dois catetos é igual ao quadrado da hipotenusa.
Ache todas as triplas de Pitágoras não superiores a 500
para cateto1, cateto2 e hipotenusa. Use um loop for triplamente
aninhado que simplesmente teste todas as possibilidades.

*/

#include <stdio.h> <math.h>

int main()
{
    int lado1 = 1, lado2 = 1, lado3 = 1;
    
    for (lado1 = 1; lado1 < 50; lado1++) 
    {
        for (lado2 = 1; lado2 < 50; lado2++)
        {   
            for (lado3 = 1; lado3 < 50; lado3++)
            {
                if (pow(lado3, 2) == pow(lado2, 2) + pow(lado1, 2))
                {
                    printf("E um triangulo pitagorico: %d %d %d\n", lado3, lado2, lado1);
                }
            }

            if (pow(lado2, 2) == pow(lado1, 2) + pow(lado3, 2))
            {
                printf("E um triangulo pitagorico: %d %d %d\n", lado3, lado2, lado1);
            }
        }

        if (pow(lado3, 2) == pow(lado2, 2) + pow(lado1, 2))
        {
            printf("E um triangulo pitagorico: %d %d %d\n", lado3, lado2, lado1);
        }
    }
    return 0;
}
