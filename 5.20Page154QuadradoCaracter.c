/*

5.20 Exibindo o quadrado de um caractere. Modifique a
função criada no Exercício 5.19 para formar um quadrado
a partir de qualquer caractere contido no parâmetro de caractere
fillCharacter. Assim, se side é 5 e fillCharacter
é ‘#’, então essa função deverá imprimir:
#####
#####
#####
#####
#####
*/

#include <stdio.h>

void draw(char fillchar, int side);

int main()
{
    int side;
    char fillchar;

    printf("Digite um valor: \n");
    scanf("%d", &side);

    printf("Digite um caracter: \n");
    getchar ();
    scanf("%c", &fillchar);

    draw (fillchar, side);

    return 0;
}

void draw(char fillchar, int side)
{

    for (int i = 0; i < side + 1; i++)
    {
        
        for (int i = 0; i < side; i++)
        {
            printf("%c", fillchar);
        }

        printf("\n");
    }

    return 0;
}