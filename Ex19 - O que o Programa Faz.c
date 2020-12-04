/*
7.19 O que o programa a seguir faz?

O Programa pega a string guardada em "string2" e armazena-a em "string1"

*/

#include <stdio.h>

void mystery1(char *s1, const char *s2);

int main(void)
{
    char string1[80];
    char string2[80];

    printf("Digite duas strings: ");
    scanf("%s%s", string1, string2);
    mystery1(string1, string2);
    printf("%s", string1 );

    return 0; 
}

// O que essa função faz?
void mystery1(char *s1, const char *s2)
{
    while (*s1 != '\0') 
    {
        s1++;
    }

    for (; *s1 = *s2; s1++, s2++) 
    {
        ;
    }
}