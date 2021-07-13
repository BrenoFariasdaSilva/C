/*

4.7 Escreva estruturas for que imprimam a seguinte sequência
de valores:
a) 1, 2, 3, 4, 5, 6, 7

#include <stdio.h>

int main()
{
    int x;

    for (x = 1; x <= 7; x++)
    {
        if (x == 7)
        {
            printf("%d", x);
        }
        else 
        {
            printf("%d, ", x);
        }
    }
    return 0;
}

b) 3, 8, 13, 18, 23

#include <stdio.h>

int main()
{
    int x;

    for (x = 3; x <= 23; x += 5)
    {
        if (x == 23)
        {
            printf("%d", x);
        }
        else 
        {
            printf("%d, ", x);
        }
    }
    return 0;
}

c) 20, 14, 8, 2, –4, –10

#include <stdio.h>

int main()
{
    int x;

    for (x = 20; x >= -10 ; x -= 6)
    {
        if (x == -10)
        {
            printf("%d", x);
        }
        else 
        {
            printf("%d, ", x);
        }
    }
    return 0;
}

d) 19, 27, 35, 43, 51

#include <stdio.h>

int main()
{
    int x;

    for (x = 19; x <= 51 ; x += 8)
    {
        if (x == 51)
        {
            printf("%d", x);
        }
        else 
        {
            printf("%d, ", x);
        }
    }
    return 0;
}

*/

#include <stdio.h>

int main()
{
    int x;

    for (x = 19; x <= 51 ; x += 8)
    {
        if (x == 51)
        {
            printf("%d", x);
        }
        else 
        {
            printf("%d, ", x);
        }
    }
    return 0;
}
