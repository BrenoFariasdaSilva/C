#include <stdio.h>

int main(void)
{
    int c = 5;
    printf("Para pos-incremento\n");
    printf("%d \n", c);
    printf("%d \n", c++);
    printf("%d \n", c);
    c = 5;
    printf("Para pre-incremento\n");
    printf("%d \n", c);
    printf("%d \n", ++c);
    printf("%d \n", c);
    c = 5;
    printf("Para pos-decremento\n");
    printf("%d \n", c);
    printf("%d \n", c--);
    printf("%d \n", c);
    c = 5;
    printf("Para pre-decremento\n");
    printf("%d \n", c);
    printf("%d \n", --c);
    printf("%d \n", c);
    return 0;
}
