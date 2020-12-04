/*

5.24 Conversões de temperatura. Implemente as seguintes
funções com inteiros:
a) Função celsius retorna o equivalente Celsius de
uma temperatura em Fahrenheit.

#include <stdio.h>

float fahrenheitToCelsius (float Fahrenheit);

int main()
{
    float Fahrenheit, celsius;

    printf("Insert the celsius: \n");
    scanf("%f", &Fahrenheit);

    celsius = fahrenheitToCelsius(Fahrenheit);

    printf("%.1f in Fahrenheit is equal to %.1f in celsius \n", Fahrenheit, celsius);

    return 0;
}

float fahrenheitToCelsius(float Fahrenheit)
{
    float celsius;

    celsius = ( Fahrenheit - 32 ) / 1.8 ;

    return celsius; 
}

b) Função fahrenheit retorna o equivalente Fahrenheit
de uma temperatura em Celsius.

#include <stdio.h>

float celsiusToFahrenheit (float celsius);

int main()
{
    float Fahrenheit, celsius;

    printf("Insert the temperature: \n");
    scanf("%f", &celsius);

    Fahrenheit = celsiusToFahrenheit (celsius);

    printf("%.1f in Celsius is equal to %.1f infahrenheit \n",celsius, Fahrenheit);

    return 0;
}

float celsiusToFahrenheit(float celsius)
{
    float Fahrenheit;

    Fahrenheit = (1.8 * celsius) + 32;

    return Fahrenheit; 
}

c) Use essas funções para escrever um programa
que imprima gráficos mostrando os equivalentes
em Fahrenheit de todas as temperaturas Celsius
de 0 a 100 graus, e os equivalentes em Celsius
de todas as temperaturas fahrenheit de 32 a 212
graus. Imprima as saídas em um formato tabular
que reduza o número de linhas de saída enquanto
continua sendo legível.

*/

#include <stdio.h>

float celsiusToFahrenheit (float celsius);

int main()
{
    float Fahrenheit, celsius;

    printf("%s\t%s\n", "Celsius", "Fahrenheit");

    for (celsius = 0; celsius < 101; celsius++)
    {

        Fahrenheit = celsiusToFahrenheit (celsius);

        printf("%.2f\t%2.f\n", celsius, Fahrenheit);
    }
    return 0;
}

float celsiusToFahrenheit(float celsius)
{
    float Fahrenheit;

    Fahrenheit = (1.8 * celsius) + 32;

    return Fahrenheit; 
}