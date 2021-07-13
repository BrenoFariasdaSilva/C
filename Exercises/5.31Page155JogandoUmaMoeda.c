/*

5.31 Jogando uma moeda. Escreva um programa que simule
o lançamento de uma moeda. Para cada lançamento
da moeda, o programa deverá imprimir Cara ou Coroa.
Deixe o programa jogar a moeda 100 vezes e conte o número
de vezes que cada lado da moeda aparece. Imprima os
resultados. O programa deverá chamar uma função flip
separada, que não utilize argumentos e retorne 0 para cara
e 1 para coroa. [Nota: se o programa realisticamente simula
o lançamento de uma moeda, então cada lado da moeda
deve aparecer aproximadamente em metade do tempo para
um total de aproximadamente 50 caras e 50 coroas.]

*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int flip (void);

int main(void)
{
    int cara = 0, coroa = 0, valorlado;

    // 0 para Cara e 1 para Coroa;

    srand (time(NULL));

    for (int i = 1; i < 101; i++)
    {
        
        valorlado =  flip ();

        if (valorlado == 0)
        {
            printf("Jogada N%d: Cara\n", i);
            cara++;
        }

        else 
        {
            printf("Jogada N%d: Coroa\n", i);
            coroa++;
        }

    }

    printf("Numero de cara: %d\n", cara);
    printf("Numero de coroa: %d\n", coroa);

    return 0;
}

int flip (void)
{
    int valoraleatorio;

    valoraleatorio = rand () % 2;

    if (valoraleatorio == 0)
    {
        return 0;
    }

    else 
    {
        return 1;
    }
}

/*

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int flip (int valoraleatorio);

int main(void)
{
    int valoraleatorio, cara = 0, coroa = 0, valorlado;

    // 0 para Cara e 1 para Coroa;

    srand (time(NULL));

    for (int i = 1; i < 101; i++)
    {
        valoraleatorio = rand () % 2;

        valorlado =  flip (valoraleatorio);

        if (valorlado == 0)
        {
            printf("Jogada N%d: Cara\n", i, valoraleatorio);
            cara++;
        }

        else 
        {
            printf("Jogada N%d: Coroa\n", i, valoraleatorio);
            coroa++;
        }

    }

    printf("Numero de cara: %d\n", cara);
    printf("Numero de coroa: %d\n", coroa);

    return 0;
}

int flip (int valoraleatorio)
{
    if (valoraleatorio == 0)
    {
        return 0;
    }

    else 
    {
        return 1;
    }
}

*/