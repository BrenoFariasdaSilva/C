/*

5.27 Números primos. Um inteiro é considerado primo se
for divisível apenas por 1 e por ele mesmo. Por exemplo,
2, 3, 5 e 7 são primos, mas 4, 6, 8 e 9 não são.
a) Escreva uma função que determine se um número
é primo. 

void numeroprimo (int valor)
{
    int somadivisores = 0;

    for (int divisor = 1; divisor <= valor; divisor++)
    {
        if (valor % divisor == 0)
        {
            somadivisores += divisor;
        }
    }

    if (somadivisores == (valor + 1))
    {
        printf("%d e um numero primo!\n", valor);
    }

    return 0;
}

b) Use essa função em um programa que determine e
imprima todos os números primos entre 1 e 10000.
Quantos desses 10000 números você realmente
precisa testar antes de ter certeza de que encontrou
todos os primos?

#include <stdio.h>

void numeroprimo (int valor);

int main()
{
    for (int valor = 1; valor < 10000; valor++)
    {
        numeroprimo (valor);
    }
    
    return 0;
}

void numeroprimo (int valor)
{
    int somadivisores = 0;

    for (int i = 1; i <= valor; i++)
    {
        if (valor % i == 0)
        {
            somadivisores += i;
        }
    }

    if (somadivisores == (valor + 1))
    {
        printf("%d e um numero primo!\n", valor);
    }

    return 0;
}

c) Inicialmente, você poderia pensar que n/2 é o limite
superior dentro do qual deveria testar para ver se
um número é primo, mas você só precisa ir até a
raiz quadrada de n. Por quê? Reescreva o programa
e execute-o das duas maneiras. Estime a melhoria do
desempenho.

*/

#include <stdio.h>

void numeroprimo (int valor);

int main()
{
    for (int valor = 1; valor < 10000; valor++)
    {
        numeroprimo (valor);
    }
    
    return 0;
}

void numeroprimo (int valor)
{
    int somadivisores = 0, totalnumeroprimos = 0;

    for (int i = 1; i <= valor; i++)
    {
        if (valor % i == 0)
        {
            somadivisores += i;
            totalnumeroprimos++;
        }
    }

    if (somadivisores == (valor + 1))
    {
        printf("O total de numeros primos encontrado e: %d\n", totalnumeroprimos);
        printf("%d e um numero primo!\n", valor);
    }

    return 0;
}

//Deixar o segundo if do void numeroprimo nessa função ou em main?
// A variável i (contador) é, ao mesmo tempo, o divisor. Usar cada variável para uma função?
// Trocar i por divisor, para ficar mais claro o processo?

/*

void numeroprimo (int valor)
{
    int somadivisores = 0;

    for (int divisor = 1; divisor <= valor; divisor++)
    {
        if (valor % divisor == 0)
        {
            somadivisores += divisor;
        }
    }

    if (somadivisores == (valor + 1))
    {
        printf("%d e um numero primo!\n", valor);
    }

    return 0;
}


*/