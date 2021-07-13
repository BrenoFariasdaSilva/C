/*

6.3 Considere um array chamado fractions.
a) Defina uma constante simbólica SIZE que possa
ser substituída pelo texto substituto 10.
b) Defina um array com elementos SIZE do tipo double
e inicialize-os em 0.
c) Referencie o quarto elemento a partir do início do
array.
d) Referencie o elemento 4 do array.
e) Atribua o valor 1,667 ao elemento 9 do array.
f) Atribua o valor 3,333 ao sétimo elemento do array.
g) Imprima os elementos 6 e 9 do array com dois dígitos
de precisão à direita do ponto decimal e mostre
a saída que aparece na tela.
h) Imprima todos os elementos do array, usando uma
estrutura de repetição for. Suponha que a variável
inteira x tenha sido definida como uma variável de
controle para o loop. Mostre a saída.

*/

#include <stdio.h>
#define SIZE 10

int main()
{
    double fractions [SIZE] = {0.0};

    fractions [3];
    fractions [4];
    fractions [9] = 1.667;
    fractions [6] = 3.333;

    printf("%.2f e %.2f\n", fractions [6], fractions [9]);

    for (int x = 0; x < SIZE; x++)
    {
        printf("fractions[%d] = %f \n", x, fractions [x]);
    }
    return 0;
}
