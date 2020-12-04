/*

4.14 Fatoriais. 
A função fatorial é usada com frequência nos problemas 
de probabilidade. O fatorial de um inteiro positivo n 
(escrito como n! e pronunciado como ‘fatorial de n’)
é igual ao produto dos inteiros positivos de 1 a n.
Escreva um programa que avalie os fatoriais dos inteiros
de 1 a 5. Imprima os resultados em formato tabular. Que
dificuldade poderia impedi-lo de calcular o fatorial de 20?

*/

#include <stdio.h>

int main()
{
    int number = 1, i;
    double fatorial;

    while (number <= 20)
    {

        fatorial = number;

        for (i = 1; (number - i ) != 0; i++)
        {
            fatorial *= (number - i);
        }

        printf("O fatorial de %d e: %0.f \n", number, fatorial);

        number++;

    }
    return 0;
}
