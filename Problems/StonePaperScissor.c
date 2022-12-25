#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int genRandom(int num)
{
    srand(time(NULL));
    return rand() % num;
}
/* 
stone 0
paper 1
scissor 2
*/
int main()
{
    int comp_score = 0;
    int player_score = 0;
    int n;
    int count = 1;
    int round;
    char temp;
    int tie = 0;
    printf("WELCOME TO THE GAME\nRule of the Game is as follows :\n1 for Stone\n2 for Paper\n3 for Scissor\n");
    printf("Enter the number of rounds You Want To Play --- ");
    scanf("%d", &round);
    printf("Press Any Key to Start");
    getchar();
    scanf("%c", &temp);
    while (count <= round)
    {
        printf("Round %d !!!\n", count);
        int i = genRandom(2);
        printf("Enter your choice : ");
        scanf("%d", &n);
        if (i == 0 && (n - 1) == 0)
        {
            printf("Tie !!!\n");
            tie++;
        }
        if (i == 0 && (n - 1) == 1)
        {
            player_score++;
        }
        if (i == 0 && (n - 1) == 2)
        {
            comp_score++;
        }
        if (i == 1 && (n - 1) == 0)
        {
            comp_score++;
        }
        if (i == 1 && (n - 1) == 1)
        {
            printf("Tie !!!\n");
            tie++;
        }
        if (i == 1 && (n - 1) == 2)
        {
            player_score++;
        }
        if (i == 2 && (n - 1) == 0)
        {
            player_score++;
        }
        if (i == 2 && (n - 1) == 1)
        {
            comp_score++;
        }
        if (i == 2 && (n - 1) == 2)
        {
            printf("Tie !!!\n");
            tie++;
        }
        count++;
    }

    printf("Score of Player is %d\n", player_score);
    printf("Score of Computer is %d\n", comp_score);
    if (player_score > comp_score)
    {
        printf("Player WON !!!!!\n");
    }
    if (player_score < comp_score)
    {
        printf("Computer WON !!!!!\n");
    }
    printf("Number of Tie are %d\n", tie);
    return 0;
}