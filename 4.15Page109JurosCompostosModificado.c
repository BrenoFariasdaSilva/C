/*

4.15 Programa de juros compostos modificado.
Modifique o programa de juros compostos da Seção 4.6 
e repita suas etapas para taxas de juros de 5, 6, 7, 8,
9 e 10%. Use um loop for para variar a taxa de juros.

*/

//Calculando juros compostos.
#include <stdio.h> <math.h>

// função main inicia a execução do programa. 
int main( void )
{
    double valor, principal = 1000.0, taxa;
    int ano;

    for (taxa = .05; taxa <= .10; taxa += .01)
    {
        // cabeçalho de coluna da tabela de resultados.
        printf( "%4s%21s%21s\n", "Ano", "Valor na conta", "Taxa" );

        // calcula valor em depósito para cada um dos dez anos.
        for ( ano = 1; ano <= 10; ano++ ) 
        {
            // calcula novo valor para o ano especificado.
            valor = principal * pow( 1.0 + taxa, ano );

            // exibe uma linha da tabela.
            printf( "%4d%21.2f%21.2f\n", ano, valor, taxa );
        } // fim do for interno.

    } // fim do for externo.

    return 0; 
}
