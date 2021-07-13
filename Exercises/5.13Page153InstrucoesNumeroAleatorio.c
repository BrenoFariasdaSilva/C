/*

5.13 Escreva instruções que atribuam inteiros aleatórios à variável
n nos seguintes intervalos:
a) 1 ≤ n ≤ 2


#include <stdio.h> <stdlib.h> <time.h>

int main()
{
    int number;

        number = 1 + srand(time(NULL)) % 3;

        printf("%d \n", number);

    return 0;
}

b) 1 ≤ n ≤ 100


#include <stdio.h> <stdlib.h> <time.h>

int main()
{
    int number;

        number = 1 + srand(time(NULL)) % 101;

        printf("%d \n", number);

    return 0;
}

c) 0 ≤ n ≤ 9


#include <stdio.h> <stdlib.h> <time.h>

int main()
{
    int number;

        number = 1 + srand(time(NULL)) % 2;

        printf("%d \n", number);

    return 0;
}

d) 1000 ≤ n ≤ 1112


#include <stdio.h> <stdlib.h> <time.h>

int main()
{
    int number;

        number = 1 + srand(time(NULL)) % 2;

        printf("%d \n", number);

    return 0;
}

e) –1 ≤ n ≤ 1


f) –3 ≤ n ≤ 11


*/

#include <stdio.h> <stdlib.h> <time.h>

int main()
{
    int number;

        number = 1 + srand(time(NULL)) % 2;

        printf("%d \n", number);

    return 0;
}
