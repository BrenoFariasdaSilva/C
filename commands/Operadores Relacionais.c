// Página 33, Como Programar em C, figura 2.13 
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Insira dois valores e eu lhe direi a relação entre eles.\n");
    scanf("%d%d", &num1, &num2);

    if (num1 == num2)
    {
        printf("%d é igual a %d\n", num1, num2);
    }

    if (num1 != num2)
    {
        printf("%d é diferente de %d\n", num1, num2);
    }

    if (num1 >= num2)
    {
        printf("%d é maior ou igual a %d\n", num1, num2);
    }

    if (num1 <= num2)
    {
        printf("%d é menor ou igual a %d\n", num1, num2);
    }

    if (num1 > num2)
    {
        printf("%d é maior do que %d\n", num1, num2);
    }

    if (num1 < num2)
    {
        printf("%d é menor do que %d\n", num1, num2);
    }
    
    return 0;
}