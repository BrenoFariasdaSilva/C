/*

5.21 Projeto: desenhando formas com caracteres.
Use técnicas semelhantes às que foram desenvolvidas
nos exercícios 5.19 a 5.20 para produzir um programa
que represente graficamente uma grande variedade
de formas.

*/

#include <stdio.h>

void draw(char fillchar, int side);

int main()
{
    int side;
    char fillchar;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &side);

        printf("Digite um caracter: \n");
        getchar ();
        scanf("%c", &fillchar);

        draw (fillchar, side);
    }

    return 0;
}

void draw(char fillchar, int side)
{

    for (int i = 0; i < side; i++)
    {
        
        for (int i = 0; i < side; i++)
        {
            printf("%c", fillchar);
        }

        printf("\n");
    }

    return 0;
}