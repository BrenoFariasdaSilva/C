/*

5.11 Arredondando números. A função floor pode ser
usada para arredondar um número até uma casa decimal
específica. A instrução
y = floor( x * 10 + 5 ) / 10;
arredonda x até a posição de décimos (a primeira posição
à direita do ponto decimal). A instrução
y = floor( x * 100 + .5 ) / 100;
arredonda x até a posição de centésimos (a segunda posição
à direita do ponto decimal). Escreva um programa
que defina quatro funções que arredondem um número
x de várias maneiras:
a) arredInteiro( número )
b) arredDecimos( número )
c) arredCentesimos( número )
d) arredMilesimos( número )
Para cada valor lido, seu programa deverá imprimir o
valor original, o número arredondado até o próximo inteiro,
o número arredondado até o próximo décimo, até o
próximo centésimo e até o próximo milésimo.

*/

#include <stdio.h> <stdlib.h> <time.h>

int main()
{
    float y, number;
    
    for (int i = 0; i < 3; i++)
    {
        number = srand(time(NULL));

        printf("Numero Original: %.2f \n", number);

        y = floor( number + .5 );

        printf("Numero Floor Inteiro:%.2f \n", y);

        y = floor( number * 10 + .5 ) / 10;

        printf("Numero Floor Inteiro:%.2f \n", y);

        y = floor( number * 100 + .5 ) / 100;

        printf("Numero Floor Inteiro:%.2f \n", y);

        y = floor( number * 1000 + .5 ) / 1000;

        printf("Numero Floor Inteiro:%.2f \n\n", y);

    }
    return 0;
}
