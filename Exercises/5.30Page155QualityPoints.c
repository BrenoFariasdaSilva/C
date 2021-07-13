/*

5.30 Escreva uma função qualityPoints que peça a média
de um estudante e retorne 4 se a média for 90-100, 3 se
a média for 80-89, 2 se a média for 70-79, 1 se a média
for 60-69 e 0 se a média for menor que 60.

*/

#include <stdio.h>

int qualitypoints (int media
);

int main()
{
    int media, pontos;

    printf("Digite a sua media: \n");
    scanf("%d", &media);

    pontos = qualitypoints (media);

    printf("A sua media e %d e seus pontos sao %d", media, pontos);

    return 0;
}

int qualitypoints (int media)
{
    if (media >= 90)
    {
        return 4;
    }

    if (media >= 80 && media < 90)
    {
        return 3;
    }

    if (media >= 70 && media < 90)
    {
        return 2;
    }

    if (media >= 60 && media < 70)
    {
        return 1;
    }

    if (media < 60)
    {
        return 0;
    }
}
