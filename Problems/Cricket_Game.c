#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int genRandom(int num)
{
    srand(time(NULL));
    return (rand() % num + 1);
}

int main()
{
    int comp_score = 0;
    int player_score = 0;
    int temp_score;
    int ball_count = 1;
    printf("WELCOME TO THE CRICKET GAME !!!\n");

    printf("You are Batting First!\n");

    printf("Rule is as follows :-\nYou have to Enter your runs between 1 to 6 \n");

    while (1)
    {
        printf("Ball %d : ", ball_count);
        scanf("%d", &temp_score);
        int i = genRandom(6);
        if (i == temp_score)
        {
            printf("OUT !!!\n");
            printf("Your score is %d(%d)\n", player_score + temp_score, ball_count);
            ball_count = 1;
            break;
        }
        else
        {
            player_score += temp_score;
            if (player_score % 50 == 0)
            {
                printf("Congratulations !!!\nYou have Scored %d Runs\n", player_score);
            }
        }
        ball_count++;
    }
    printf("---------------------------------------------------------------------------------------\n");
    printf("You are Bowling Now\n");
    int bowl_prediciton;
    int j;
    printf("Rule is as follows :-\nYou have to Enter a number between 1 to 6 \nIf your input matches with the outpur of Computer GAME OVER\n");
    while (1)
    {
        printf("Ball %d : ", ball_count);
        scanf("%d", &bowl_prediciton);
        j = genRandom(6);
        if (j == bowl_prediciton)
        {
            printf("OUT !!!\n");
            printf("Computer score is %d(%d)\n", comp_score + j, ball_count);
            ball_count = 1;
            break;
        }
        else
        {
            comp_score += j;
            if (comp_score % 50 == 0)
            {
                printf("Computer has have Scored %d Runs\n", comp_score);
            }
        }
        ball_count++;
    }

    if (player_score > comp_score)
    {
        printf("Player WON by %d runs!!!!!\n", player_score - comp_score);
    }
    if (player_score < comp_score)
    {
        printf("Computer WON by %d runs!!!!!\n", comp_score - player_score);
    }
    return 0;
}