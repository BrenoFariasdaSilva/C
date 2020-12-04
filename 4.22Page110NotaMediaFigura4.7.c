/*

4.22 Nota média. Modifique o programa da Figura 4.7 de
modo que seja possível calcular a nota média da classe.

*/

#include <stdio.h>

int main( void )
{
    int nota; /* uma nota */
    int aCont = 0; /* número de As */
    int bCont = 0; /* número de Bs */
    int cCont = 0; /* número de Cs */
    int dCont = 0; /* número de Ds */
    int fCont = 0; /* número de Fs */

    printf( "Digite as notas em letra.\n" );
    printf( "Digite o caractere EOF para encerrar a entrada.\n" );

    /* loop até que o usuário digite sequência de fim de arquivo */
    while ( ( nota = getchar() ) != EOF ) 
    {
        /* determina qual nota foi digitada */
        switch ( nota ) 
        { /* switch aninhado no while */

            case 'A': /* nota foi ‘A’ maiúsculo */
            case 'a': /* ou ‘a’ minúsculo */
            ++aCont; /* incrementa aCount */
            break; /* necessário para sair do switch */

            case 'B': /* nota foi ‘B’ maiúsculo */
            case 'b': /* ou ‘b’ minúsculo */
            ++bCont; /* incrementa bCount */
            break; /* sai do switch */

            case 'C': /* nota foi ‘C’ maiúsculo */
            case 'c': /* ou ‘c’ minúsculo */
            ++cCont; /* incrementa cCount */
            break; /* sai do switch */

            case 'D': /* nota foi ‘D’ maiúsculo */
            case 'd': /* ou ‘d’ minúsculo */
            ++dCont; /* incrementa dCount */
            break; /* sai do switch */

            case 'F': /* nota foi ‘F’ maiúsculo */
            case 'f': /* ou ‘f’ minúsculo */
            ++fCont; /* incrementa fCount */
            break; /* sai do switch */

            case '\n': /* ignora caracteres de nova linha, */
            case '\t': /* tabulações, */
            case ' ': /* e espaços na entrada */
            break; /* sai do switch */

            default: /* apanha todos os outros caracteres */
            printf( "Letra de nota incorreta." );
            printf( "Digite nova nota.\n" );
            break; /* opcional; sairá do switch de qualquer forma */
        } /* fim do switch */
    } /* fim do while */

    /* saída de resumo dos resultados */
    printf( "\nTotais para cada nota são:\n" );
    printf( "A: %d\n", aCont ); /* exibe número de notas A */
    printf( "B: %d\n", bCont ); /* exibe número de notas B */
    printf( "C: %d\n", cCont ); /* exibe número de notas C */
    printf( "D: %d\n", dCont ); /* exibe número de notas D */
    printf( "F: %d\n", fCont ); /* exibe número de notas F */
    return 0; /* indica que o programa foi concluído com sucesso */
    } /* fim da função main */