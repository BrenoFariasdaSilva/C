/*

3.30 O que o programa a seguir exibe?

#include <stdio.h>

int main()

{
    int linha = 10, coluna;

    while (linha >= 1)
    {
        coluna = 1;

        while (coluna <= 10)
        {
            printf("%s", linha % 2 ? "<" : ">");
            coluna++;
        }
    
    linha--;
    printf("\n");

    }
    return 0;
}

RESPOSTA:
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<

*/

#include <stdio.h>

int main()

{
    int linha = 10, coluna;

    while (linha >= 1)
    {
        coluna = 1;

        while (coluna <= 10)
        {
            printf("%s", linha % 2 ? "<" : ">");
            coluna++;
        }
    
    linha--;
    printf("\n");

    }
    return 0;
}
