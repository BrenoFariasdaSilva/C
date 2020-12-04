/* 
7.21 Encontre o erro em cada um dos segmentos de programa
a seguir. Se o erro puder ser corrigido, explique como
fazê-lo.
a) int *number;
printf( "%d\n", *number );

RESOLUÇÂO:
int n = 10;
int *number = &n;
printf("%d\n", *number);

b) float *realPtr;
long *integerPtr;
integerPtr = realPtr;

RESOLUÇÃO:
float n = 4.12;
float *realPtr = &n;
float *integerPtr;
integerPtr = realPtr;

c) int * x, y;
x = y;

RESOLUÇÃO:
int * x, y = 2;
x = &y;

d) char s[] = "este é um array de caracteres";
int count;
for ( ; *s != '\0'; s++)
printf( "%c ", *s );

RESOLUÇÃO:
char s[] = "Este é um Array de caracteres";
int count;

for (count = 0; *(s + count) != '\0'; count++)
{
    printf("%c", *(s + count));
}

e) short *numPtr, result;
void *genericPtr = numPtr;
result = *genericPtr + 7;

RESOLUÇÃO:
short n = 10;
short *numPtr = &n, result = 0;
short **genericPtr = &numPtr;
result = **genericPtr + 7;
printf("%d \n", result);

f) float x = 19.34;
float xPtr = &x;
printf( "%f\n", xPtr );

RESOLUÇÃO:
float x = 19.34;
float *xPtr = &x;

printf("%.2f ", *xPtr);

g) char *s;
printf("%s\n", s);

RESOLUÇÃO:
char name[10] = "breno";
char *s = &name;
printf("%s \n", s);

*/

#include <stdio.h>

int main(void)
{
    short n = 10;
    short *numPtr = &n, result = 0;
    short **genericPtr = &numPtr;

    result = **genericPtr + 7;
    
    printf("%d \n", result);

    return 0;
}

