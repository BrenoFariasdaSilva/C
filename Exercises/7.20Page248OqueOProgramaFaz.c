/*
7.20 O que o programa a seguir faz?

O Programa pega a string guardada em "string" e retorna o numero de caracteres guardados
dentro dessa string.

*/

#include <stdio.h>

int mystery2(const char *s);

int main(void)
{
    char string[80];

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("%d", mystery2(string));

    return 0; 
}

// O que essa função faz?
int mystery2(const char *s)
{
    int x;

    for (x = 0; *s != '\0'; s++) 
    {
        x++;
    }

    return x;
}