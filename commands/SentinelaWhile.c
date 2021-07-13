#include <stdio.h>

int main()
{
    int nota, total = 0, contador = 0;
    float media;
    printf("Insira a note, -1 no fim: \n");
    scanf("%d", &nota);
    while (nota != -1)
    {
        total = total + nota;
        contador = contador + 1;
        printf("Digite a nota, -1 para finalizar: \n");
        scanf("%d", &nota);
    }
    if (contador != 0)
    {
        media = (float)total / contador;
        printf("A media da turma e %.2f\n", media);
    }
    else
    {
        printf("Nenhuma nota foi inserida");
    }
    return 0;
}