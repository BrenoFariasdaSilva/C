/*

5.35 Fibonacci. A série de Fibonacci
0, 1, 1, 2, 3, 5, 8, 13, 21, …
começa com os termos 0 e 1, e tem a propriedade de
estabelecer que o termo seguinte é a soma dos dois termos
anteriores. 
a) Escreva uma função não recursiva
fibonacci(n) que calcule o n-ésimo número de Fibonacci.

#include <stdio.h>


int main()
{
    int antepenultimovalor = 0, penultimovalor = 1, valor;

    printf("Serie de Fibonnacci: \n");

    for (int i = 1; i <= 45; i++)
    {
        valor = antepenultimovalor + penultimovalor;

        antepenultimovalor =  penultimovalor;

        penultimovalor = valor;

        printf("%s %d\t%s %d\n", "Posicao:", i,"Valor:", valor);
    }
    
    return 0;
}

b) Determine o maior número de Fibonacci que
pode ser impresso no seu sistema. Modifique o programa
da parte a) para usar double em vez de int para
calcular e retornar números de Fibonacci. Faça com que
o programa se repita até que falhe devido a um valor excessivamente
alto.

R: 46


#include <stdio.h>


int main()
{
    double antepenultimovalor = 0, penultimovalor = 1, valor;

    printf("Serie de Fibonnacci: \n");

    for (int i = 1; i <= 1000; i++)
    {
        valor = antepenultimovalor + penultimovalor;

        antepenultimovalor =  penultimovalor;

        penultimovalor = valor;

        printf("%s %d\t%s %.0f\n", "Posicao:", i,"Valor:", valor);
    }
    
    return 0;
}


*/

#include <stdio.h>


int main()
{
    double antepenultimovalor = 0, penultimovalor = 1, valor;

    printf("Serie de Fibonnacci: \n");

    for (int i = 1; i <= 1000; i++)
    {
        valor = antepenultimovalor + penultimovalor;

        antepenultimovalor =  penultimovalor;

        penultimovalor = valor;

        printf("%s %d\t%s %.0f\n", "Posicao:", i,"Valor:", valor);
    }
    
    return 0;
}
