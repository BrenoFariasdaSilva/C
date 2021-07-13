#include <stdio.h>

int main()
{
    int a, b, s, dif, m, div, mod;
    printf("Insira dois valores: \n");
    scanf("%d%d", &a, &b);
    s = a + b;
    dif = a - b;
    m = a * b;
    div = a / b;
    mod = a % b;
    printf("As relaçoes dos valores sao:\n A+B=%d\n A-B=%d\n A*B=%d\n A/B=%d\n A modulo de B=%d\n", s, dif, m, div, mod);
    return 0;
}
