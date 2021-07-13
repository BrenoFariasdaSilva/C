/*

4.23 Calculando juros compostos com inteiros. Modifique
o programa da Figura 4.6 de modo que ele use
apenas inteiros para calcular os juros compostos. [Dica:
trate todos os valores monetários como números inteiros
de centavos. Depois ‘quebre’ o resultado em sua parte
de real e em sua parte de centavos usando as operações
de divisão e módulo, respectivamente. Insira uma vírgula.]

*/

#include <stdio.h>
#include <math.h>

/* função main inicia a execução do programa */
int main( void )
{
    double valor;/* valor em depósito */
    double principal = 1000; /* principal inicial */
    double taxa = .05; /* taxa anual de juros */
    int ano; /* contador do ano */

    
    /* cabeçalho de coluna da tabela de resultados */
    printf( "%4s%21s\n", "Ano", "Valor na conta" );

    /* calcula valor em depósito para cada um dos dez anos */
    for ( ano = 1; ano <= 10; ano++ ) 
    {
        /* calcula novo valor para o ano especificado */
        valor = principal * pow(1.00 + taxa, ano );
    
        /* exibe uma linha da tabela */
        printf( "%4d%21.2f\n", ano, valor );
    } /* fim do for */

    return 0;
}