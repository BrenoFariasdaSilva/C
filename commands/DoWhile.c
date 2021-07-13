#include <stdio.h>
int main()
{
    int soma, n = 1;
    soma = 0; // inicialização da variável soma
    do
    {
        soma = soma + n;  // atualização da variável soma
        n = n + 1;        // atualização da variável de controle
    } while (n <= 42069); // teste de paragem
    printf("O valor da soma = %d\n", soma);
    return 0;
}