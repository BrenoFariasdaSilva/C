/*

5.14 Para cada um dos conjuntos de inteiros a seguir, escreva
uma única instrução que imprima um número aleatoriamente
a partir do conjunto.
a) 2, 4, 6, 8, 10.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int menorlimite = 2, maiorlimite= 10, y;

    srand (time(NULL));

    for (int i = 0; i < 5; i++)
    {
        y = menorlimite + rand() % maiorlimite;

        if (y % 2 != 0)
        {
            printf("%d ", y - 1);
        }

        else
        {
            printf("%d ", y);
        }
        
    }
    return 0;
}

b) 3, 5, 7, 9, 11.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int menorlimite = 3, maiorlimite = 11, y;

    srand (time(NULL));

    for (int i = 0; i < 20; i++)
    {
        y = menorlimite + rand() % maiorlimite;

        if (y % 2 == 0)
        {
            printf("%d ", y - 1);
        }

        else
        {
            printf("%d ", y);
        }
        
    }
    return 0;
}

c) 6, 10, 14, 18, 22.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int function(int menorlimite, int maiorlimite, int ratio);

int main()
{
    int menorlimite, maiorlimite, ratio, position, number;

    printf("Digite o valor do menor valor: \n");
    scanf("%d", &menorlimite);

    printf("Digite o valor do maior valor: \n");
    scanf("%d", &maiorlimite);

    printf("Digite a razao do conjunto: \n");
    scanf("%d", &ratio);

    position = function (menorlimite, maiorlimite, ratio);

    srand (time(NULL));

    for (int i = 0; i < position; i++)
    {
        number = (menorlimite + ((1 + (rand () % position)) * 4));

        printf("%d ", number);
        
    }
    return 0;
}

int function (int menorlimite, int maiorlimite, int ratio)
{
    int position;
    position = (maiorlimite - menorlimite) / ratio;

    return position;
    
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int function(int menorlimite, int maiorlimite, int ratio);

int main()
{
    int menorlimite, maiorlimite, ratio, position, number;

    printf("Digite o valor do menor valor: \n");
    scanf("%d", &menorlimite);

    printf("Digite o valor do maior valor: \n");
    scanf("%d", &maiorlimite);

    printf("Digite a razao do conjunto: \n");
    scanf("%d", &ratio);

    position = function (menorlimite, maiorlimite, ratio);

    srand (time(NULL));

    for (int i = 0; i < position; i++)
    {
        number = (menorlimite + ((1 + (rand () % position)) * 4));

        printf("%d ", number);
        
    }
    return 0;
}

int function (int menorlimite, int maiorlimite, int ratio)
{
    int position;
    position = (maiorlimite - menorlimite) / ratio;

    return position;
}
