/* 
0 --> Snake
1 --> Water
2 --> Gun 

computer player winner
0     =     0    n
1     =     1    n 
2     =     2    n 
0           1    c
1           0    p
0           2    c
2           0    p
1           2    c
2           1    p

Game logic:-

00 or 11 or 22 (c == p) --> Draw
if (10 or 20 or 21) --> Player else computer winner(like this 01 or 02 or 12 --> computer)

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); 
    int player, computer = rand() % 3; 

    printf("Choose 0 for Snake, 1 for Water, and 2 for Gun:\n");
    scanf("%d", &player);

  
    if (player < 0 || player > 2) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 1;
    }

    
    printf("You chose: %d\n", player);
    printf("Computer chose: %d\n", computer);

    
    if (player == computer) {
        printf("It's a Draw!\n");
    } else if ((player == 0 && computer == 1) ||  
               (player == 1 && computer == 2) ||  
               (player == 2 && computer == 0)) {  
        printf("You Win!\n");
    } else {
        printf("You Lose!\n");
    }

    return 0;
}
