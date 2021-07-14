#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int i, j, height = 20, width = 20;
int gameover, score;
int x, y, fruitx, fruity, flag;
// Function to take the input
void input()
{
    if (kbhit()) {
        switch (getch()) {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'd':
            flag = 3;
            break;
        case 'w':
            flag = 4;
            break;
        case 'x':
            gameover = 1;
            break;
        }
    }
}
  