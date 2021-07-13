#include <stdio.h>

int main()
{
    int x, y, M;
    printf("Introduza x e y: /n");
    scanf("%d,%d", &x, &y);
    if (x > y)
        M = x;
    else
        M = y;
    printf("O valor maior = %d\n", M);
    return 0;
}
/*
    if (x)
        y
    else 
        if (A)
        z

   É o mesmo que:

   if (x)
        y
   else if   (A)
        z  
*/

/*  Ou
#include <stdio.h>

int main()
{
    int x=0, y=0;
    printf("Introduza x e y: \n");
    scanf("%d,%d", &x, &y);
    printf("O valor maior = %d\n", x > y ? x : y);
    return 0;
}
*/