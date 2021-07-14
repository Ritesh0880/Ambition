#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int i, j, height = 20, width = 20;
int gameover, score;
int x, y, fruitx, fruity, flag;
// Function for the logic behind
// each movement
void logic()
{
    sleep(0.01);
    switch (flag) {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y++;
        break;
    case 4:
        x--;
        break;
    default:
        break;
    }
  
    // If the game is over
    if (x < 0 || x > height
        || y < 0 || y > width)
        gameover = 1;
  
    // If snake reaches the fruit
    // then update the score
    if (x == fruitx && y == fruity) {
    label3:
        fruitx = rand() % 20;
        if (fruitx == 0)
            goto label3;
  
    // After eating the above fruit
    // generate new fruit
    label4:
        fruity = rand() % 20;
        if (fruity == 0)
            goto label4;
        score += 10;
    }
}
  