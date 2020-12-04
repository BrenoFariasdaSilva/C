/*

5.26 Números perfeitos. Um número inteiro é considerado
um número perfeito se a soma de seus fatores, incluindo
1 (mas não o próprio número) for igual ao próprio
número. Por exemplo, 6 é um número perfeito porque 6
= 1 + 2 + 3. Escreva uma função perfect que determine
se o parâmetro number é um número perfeito. Use
essa função em um programa que determine e imprima
todos os números perfeitos entre 1 e 1000. Imprima os
fatores de cada número perfeito para confirmar se o número
é realmente perfeito. Desafie o poder de seu computador
testando números muito maiores que 1000.

*/

#include <stdio.h>

int perfeito (int number);

int main()
{
    int somafatores;

    for (int number = 1; number < 10001; number++)
    {
        somafatores = perfeito (number);

        if (somafatores == number)
        {
            printf("%d e um numero perfeito; \n", number);
        }

    }
    
    return 0;
}

int perfeito (int number)
{
    int divisornatural, somafatores = 0; 

    if (number == 1)
    {
        return 0;
    }
    
    for (int i = 1; i < number; i++ )
    {
        if (number % i == 0)
        {
           somafatores += i; 
        }
    }

    return somafatores;
}

