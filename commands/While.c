#include <stdio.h>

int main()
{
    int soma, n = 1;
    soma = 0;          // inicialização da variável soma
    while (n <= 42069) // teste de paragem
    {
        soma = soma + n; // atualização da variável soma
        n = n + 1;       // atualização da variável de controle
    }
    printf("O valor da soma = %d\n", soma);
    return 0;
}