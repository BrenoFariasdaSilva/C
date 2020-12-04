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
#define StartLine 4
#define StartColumn 11
#define EndLine 2               
#define EndColumn 0 
#define Dimensions 2

void MazeTraverse (char Maze[ArraySIZE][ArraySIZE]);
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

void MazeTraverse(char Maze[ArraySIZE][ArraySIZE])
{
    int CurrentCoordinates[Coordinates];
    MazeStartPositions(CurrentCoordinates); 

    while (CurrentCoordinates[0] != EndLine && CurrentCoordinates[1] != EndColumn)
    {
        if (Maze[CurrentCoordinates[0] - 1][CurrentCoordinates[1]] == '.')  
        {
            MazePath(Maze, CurrentCoordinates);
            PlayerUp(CurrentCoordinates);  
        }

        else if (Maze[CurrentCoordinates[0]][CurrentCoordinates[1] - 1] == '.')
        {   
            MazePath(Maze, CurrentCoordinates);
            PlayerLeft(CurrentCoordinates);  
        }

        else if (Maze[CurrentCoordinates[0] + 1][CurrentCoordinates[1]] == '.')
        {     
            MazePath(Maze, CurrentCoordinates);
            PlayerDown(CurrentCoordinates);  
        }

        else if (Maze[CurrentCoordinates[0]][CurrentCoordinates[1] + 1] == '.')
        {     
            MazePath(Maze, CurrentCoordinates);
            PlayerRight(CurrentCoordinates);   
        }

        else
        {
            MazeDeadEnd(Maze, CurrentCoordinates);  
            MazeStartPositions(CurrentCoordinates); 
            MazeRunReset(Maze);
        } 
        MazePrinter(Maze);  
    }
}

void MazeStartPositions (int *CurrentCoordinatesPtr)
{
    *(CurrentCoordinatesPtr) = StartLine; *(CurrentCoordinatesPtr + 1) = StartColumn;
}   

void MazePath (char *MazePtr, const int *CurrentCoordinatesPtr)
{
    *(MazePtr(*(CurrentCoordinatesPtr) * ArraySIZE) + (*(CurrentCoordinatesPtr + 1) * ArraySIZE)) = 'X';
}

void PlayerUp (int *CurrentCoordinatesPtr)
{
    --CurrentCoordinates[0];  
}

void PlayerLeft (int *CurrentCoordinatesPtr)
{
    --CurrentCoordinates[1];
}

void PlayerDown (int *CurrentCoordinatesPtr)
{
    ++CurrentCoordinates[0]; 
}

void PlayerRight (int *CurrentCoordinatesPtr)
{
    ++CurrentCoordinates[1]; 
}

void MazeDeadEnd (char *MazePtr, const int *CurrentCoordinatesPtr)
{
    Maze[CurrentCoordinates[0]][CurrentCoordinates[1]] = 'O';
}

void DeadEndPathsReset (char *MazePtr)
{
    for (int i = 0; i < ArraySIZE * Dimensions; i++)
    {
        if (Maze[i] == 'O')
        {
            Maze[i] == '.';        
        }
    } 
}

void MazeRunReset (char *MazePtr)
{
    for (int i = 0; i < ArraySIZE * Dimensions; i++)
    {
        if (Maze[i] == 'X')
        {
            Maze[i] == '.';        
        }
    } 
}

void MazePrinter(const char *MazePtr)
{
    for (int i = 0; i < ArraySIZE; i++)
    {
        for (int j = 0; j < ArraySIZE; j++)
        {
            printf("%c ", Maze[i][j]);
        }
        printf("\n");
    }  
    printf("\n");
}