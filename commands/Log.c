#include <stdio.h>
#include <math.h>

int main()
{
    double num = 5.6, result;

    result = log(num);
    printf("log(%.1f) = %.2f", num, result);

    return 0;
}