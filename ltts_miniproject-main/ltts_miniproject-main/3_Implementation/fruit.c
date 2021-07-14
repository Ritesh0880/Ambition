#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int i, j, height = 20, width = 20;
int gameover, score;
int x, y, fruitx, fruity, flag;
// within the boundary
void setup()
{
    gameover = 0;
  
    // Stores height and width
    x = height / 2;
    y = width / 2;
label1:
    fruitx = rand() % 20;
    if (fruitx == 0)
        goto label1;
label2:
    fruity = rand() % 20;
    if (fruity == 0)
        goto label2;
    score = 0;
}
  

  