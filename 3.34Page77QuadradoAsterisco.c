#include <stdio.h>

int main()
{
    int lado, contador1=1, contador2=1;

    printf("Insira um valor: \n");
    scanf("%d", &lado);

    while ( contador1 <= lado )
    {
        if (contador1==1 || contador1==lado)
        {
            while (contador2 <= lado)
            {
                printf("*");
                ++contador2;
            }
        }
        else
        {
            while (contador2 <= lado)
            {
                if (contador2==1 || contador2==lado)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                ++contador2;
            }
            
        }
        
        contador2=1;

        printf(" \n");
        ++contador1;
    }
    return 0;
}