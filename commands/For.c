#include <stdio.h>
int main()
{
    int soma, n;
    soma = 0; // inicialização da variável soma em 0
    for (n = 1; n <= 100; n++)
        soma = soma + n; // atualização da variável soma
    printf("O valor da soma = %d\n", soma);
    return 0;
}

/*
{
    for (INICIALIZAÇÃO; TESTE DE PARAGEM; ATUALIZAÇÃO)
        * /
            for (inicializacao; condicao; pós - instrucao)
        {
            /* conjunto de instruções a executar enquanto a condição for verdadeira */
        }
}
*/

