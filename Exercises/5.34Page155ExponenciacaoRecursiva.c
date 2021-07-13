/*

5.34 Exponenciação recursiva. Escreva uma função recursiva
power( base, expoente ) que, quando chamada,
retorna
baseexpoente
Por exemplo, power( 3, 4 ) = 3 * 3 * 3 * 3.
Suponha que expoente seja um inteiro maior ou igual
a 1. Dica: a etapa de recursão usaria o relacionamento
baseexpoente = base * baseexpoente–1
e a condição de término ocorre quando expoente é
igual a 1, pois
base1 = base


*/

#include <stdio.h>

int power (int base, int expoente);

int main()
{
    int potencia, base, expoente;

    printf("Digite o valor da base: \n");
    scanf("%d", &base);
    scanf("Digite o valor do expoente: \n");
    scanf("%d", &expoente);

    potencia = power (base, expoente);

    printf("%d elevado a %d e: %d", base, expoente, potencia);

    return 0;
}

int power (int base, int expoente)
{
    int potencia;

    if (expoente == 1)
    {
        return base;
    }

    else 
    {
        potencia = base * power (base, expoente - 1);
    }

    return potencia;
}
