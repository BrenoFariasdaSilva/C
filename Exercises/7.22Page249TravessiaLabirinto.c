/*

7.22 Travessia de labirinto. A grade a seguir é uma representação
do array de duplo subscrito de um labirinto.
# # # # # # # # # # # #
# . . . # . . . . . . #
. . # . # . # # # # . #
# # # . # . . . . # . #
# . . . . # # # . # . .
# # # # . # . # . # . #
# . . # . # . # . # . #
# # . # . # . # . # . #
# . . . . . . . . # . #
# # # # # # . # # # . #
# . . . . . . # . . . #
# # # # # # # # # # # #
Os símbolos # representam as paredes do labirinto, e os
pontos (.) representam quadrados pelo caminho que,
possivelmente, levam à saída do labirinto.
Existe um algoritmo simples usado para percorrer o labirinto
que garante que encontremos a saída (supondo que
exista uma). Se não existir uma saída, você chegará ao
ponto de partida novamente. Coloque sua mão direita na
parede à sua direita e comece a caminhar para a frente.
Nunca remova sua mão da parede. Se o labirinto virar
para a direita, você seguirá a parede para a direita. Desde
que não remova sua mão da parede, por fim você chegará
à saída do labirinto. Pode ser que haja um caminho mais
curto que aquele que você tomou, mas o mais longo garante
sua saída do labirinto.
Escreva a função recursiva MazeTraverse para percorrer
o labirinto. A função deverá receber como argumentos
um array de 12 por 12 caracteres que represente o
labirinto e o local em que labirinto começa. À medida
que MazeTraverse tenta localizar a saída do labirinto,
ele deverá colocar o caractere X em cada quadrado no
caminho. A função deverá exibir o labirinto após cada
movimento para que o usuário possa observar enquanto
o labirinto é resolvido.

*/

#include <stdio.h>

#define ArraySIZE 12
#define Coordinates 2
#define PointerSize 144
#define StartLine 4
#define StartColumn 11
#define EndLine 2               
#define EndColumn 0 
#define Dimensions 2

void MazeTraverse (char *MazePtr[ArraySIZE][ArraySIZE]);
void MazeStartPositions (int *CurrentCoordinatesPtr); 
void MazePath (char *MazePtr, const int *CurrentCoordinatesPtr);
void PlayerUp (int *CurrentCoordinatesPtr);
void PlayerLeft (int *CurrentCoordinatesPtr);
void PlayerDown (int *CurrentCoordinatesPtr);
void PlayerRight (int *CurrentCoordinatesPtr);
void MazeDeadEnd (char *MazePtr, const int *CurrentCoordinatesPtr);
void DeadEndPathsReset (char *MazePtr);
void MazeRunReset (char *MazePtr);
void MazePrinter (const char *MazePtr);

int main(void)
{
    char Maze[ArraySIZE][ArraySIZE] = {{"############"}, {"#...#......#"},
    {"E.#.#.####.#"}, {"###.#....#.#"}, {"#....###.#.S"}, {"####.#.#.#.#"},
    {"#..#.#.#.#.#"}, {"##.#.#.#.#.#"}, {"#........#.#"}, {"######.###.#"}, 
    {"#......#...#"}, {"############"}};

    MazeTraverse(Maze);
    DeadEndPathsReset(Maze);
    MazePrinter(Maze);

    return 0;
}

void MazeTraverse(char *MazePtr[ArraySIZE][ArraySIZE])
{
    int CurrentCoordinates[Coordinates];
    MazeStartPositions(CurrentCoordinates); 

    while (CurrentCoordinates[0] != EndLine && CurrentCoordinates[1] != EndColumn)
    {
        if (MazePtr[CurrentCoordinates[0] - 1][CurrentCoordinates[1]] == '.')  
        {
            MazePath(MazePtr, CurrentCoordinates);
            PlayerUp(CurrentCoordinates);  
        }

        else if (MazePtr[CurrentCoordinates[0]][CurrentCoordinates[1] - 1] == '.')
        {   
            MazePath(MazePtr, CurrentCoordinates);
            PlayerLeft(CurrentCoordinates);  
        }

        else if (MazePtr[CurrentCoordinates[0] + 1][CurrentCoordinates[1]] == '.')
        {     
            MazePath(MazePtr, CurrentCoordinates);
            PlayerDown(CurrentCoordinates);  
        }

        else if (MazePtr[CurrentCoordinates[0]][CurrentCoordinates[1] + 1] == '.')
        {     
            MazePath(MazePtr, CurrentCoordinates);
            PlayerRight(CurrentCoordinates);   
        }

        else
        {
            MazeDeadEnd(MazePtr, CurrentCoordinates);  
            MazeStartPositions(CurrentCoordinates); 
            MazeRunReset(MazePtr);
        } 
        MazePrinter(MazePtr);  
    }
}

void MazeStartPositions (int *CurrentCoordinatesPtr)
{
    CurrentCoordinatesPtr[0] = StartLine; 
    CurrentCoordinatesPtr[1] = StartColumn;
}   

void MazePath (char *MazePtr, const int *CurrentCoordinatesPtr)
{
    MazePtr[(CurrentCoordinatesPtr[0] * ArraySIZE) + CurrentCoordinatesPtr[1]] = 'X';
}

void PlayerUp (int *CurrentCoordinatesPtr)
{
    CurrentCoordinatesPtr[0]--;  
}

void PlayerLeft (int *CurrentCoordinatesPtr)
{
    CurrentCoordinatesPtr[1]--; 
}

void PlayerDown (int *CurrentCoordinatesPtr)
{
    ++CurrentCoordinatesPtr[0]; 
}

void PlayerRight (int *CurrentCoordinatesPtr)
{
    ++CurrentCoordinatesPtr[1]; 
}

void MazeDeadEnd (char *MazePtr, const int *CurrentCoordinatesPtr)
{
    MazePtr[(CurrentCoordinatesPtr[0] * ArraySIZE) + CurrentCoordinatesPtr[1]] = 'O';
}

void DeadEndPathsReset (char *MazePtr)
{
    for (int i = 0; i < PointerSize; i++)
    {
        if (MazePtr[i] == 'O')
        {
            MazePtr[i] = '.';        
        }
    } 
}

void MazeRunReset (char *MazePtr)
{
    for (int i = 0; i < PointerSize; i++)
    {
        if (MazePtr[i] == 'X')
        {
            MazePtr[i] = '.';        
        }
    } 
}

void MazePrinter(const char *MazePtr)
{
    for (int i = 0; i < PointerSize; i++)
    {
        printf("%c ", MazePtr[i]);

        if (ArraySIZE % i == 0)
        {
            printf("\n");
        }
    }  
    printf("\n");
}