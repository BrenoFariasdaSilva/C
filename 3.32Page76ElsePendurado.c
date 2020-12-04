/*

3.32 Outro problema do else pendurado. Modifique o
seguinte código para produzir a saída mostrada. Use as
técnicas de recuo apropriadas. Você pode não precisar fazer
mudança alguma, além de inserir as chaves. O compilador
ignora os recuos em um programa. Eliminamos
o recuo do código a seguir para tornar o problema mais
desafiador. 
[Nota: é possível que nenhuma modificação seja necessária.]

if ( y == 8 )
if ( x == 5 )
printf( “@@@@@\n” );
else
printf( “#####\n” );
printf( “$$$$$\n” );
printf( “&&&&&\n” );

a) Supondo que x = 5 e y = 8, a seguinte saída será
produzida.

@@@@@
$$$$$
&&&&&

b) Supondo que x = 5 e y = 8, a seguinte saída será
produzida.

@@@@@

c) Supondo que x = 5 e y = 8, a seguinte saída será
produzida.

@@@@@
&&&&&

d) Supondo que x = 5 e y = 7, a seguinte saída será
produzida. 
[Nota: as três últimas instruções printf fazem parte de uma instrução composta.]

#####
$$$$$
&&&&&

RESPOSTA:

a)
#include <stdio.h>

int main()
{
    int y = 8, x = 5;

    if ( y == 8 )
    {
        if ( x == 5 )
            printf( "@@@@@\n" );
    }
    else
    {
        printf( "#####\n" );
    }

    printf( "$$$$$\n" );
    printf( "&&&&&\n" );

    return 0;
}

b)
#include <stdio.h>

int main()
{
    int y = 8, x = 5;

    if ( y == 8 )
    {
        if ( x == 5 )
        {
            printf( "@@@@@\n" );
        }
    }
    else
        {
            printf( "#####\n" );
            printf( "$$$$$\n" );
            printf( "&&&&&\n" );
        }
    
    return 0;
}

c)
#include <stdio.h>

int main()
{
    int y = 8, x = 5;

    if ( y == 8 )
    {
        if ( x == 5 )
        {
            printf( "@@@@@\n" );
        }
    }
    else
        {
            printf( "#####\n" );
            printf( "$$$$$\n" );
        }
    printf( "&&&&&\n" );
    return 0;
}

d)
#include <stdio.h>

int main()
{
    int y = 8, x = 5;

    if ( y == 7 )
    {
        if ( x == 5 )
        {
            printf( "@@@@@\n" );
        }
    }
    else
    {
        printf( "#####\n" );
        printf( "$$$$$\n" );
        printf( "&&&&&\n" );
    }
    return 0;
}

*/

#include <stdio.h>

int main()
{
    int y = 8, x = 5;

    if ( y == 7 )
    {
        if ( x == 5 )
        {
            printf( "@@@@@\n" );
        }
    }
    else
    {
        printf( "#####\n" );
        printf( "$$$$$\n" );
        printf( "&&&&&\n" );
    }
    return 0;
}
