#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
  
int i, j, height = 20, width = 20;
int gameover, score;
int x, y, fruitx, fruity, flag;

// Driver Code
void main()
{
    int m, n;
  
    // Generate boundary
    setup();
  
    // Until the game is over
    while (!gameover) {
  
        // Function Call
        draw();
        input();
        logic();
    }
}