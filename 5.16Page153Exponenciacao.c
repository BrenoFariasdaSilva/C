/*

5.16 Exponenciação. Escreva uma função
potenciaInt(base, expoente) que retorne o
valor de
baseexpoente
Por exemplo, potenciaInt( 3, 4 ) = 3 * 3 * 3 * 3.
Suponha que expoente seja um inteiro positivo, diferente
de zero, e base seja um inteiro. A função potenciaInt
deve usar for para controlar o cálculo. Não use
funções da biblioteca matemática.

*/

#include <stdio.h>

int potenciaInt (int base,int expoente);

int resultado = 1;

int main()
{
    int base, expoente;

    printf("Digite o valor da base \n");
    scanf("%d", &base);
    printf("Digite o valor do expoente: \n");
    scanf("%d", &expoente);

    if (expoente <= 0 )
    {
        printf("Valores incorretos! \n");
    }

    else 
    {
        printf("O resultado e: %d\n", potenciaInt(base, expoente));
    }
    return 0;
}

int potenciaInt (int base,int expoente)
{
    for (int i = 0; i < expoente; i++)
    {
        resultado *= base;
    }
    return resultado;
}

