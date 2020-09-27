#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

#define LOSE 0
#define WIN 1
#define POINT 2

typedef int Outcome;
typedef int Bool;

Outcome play_game(int sum, int count_play);
int roll_dice(void);
Bool play_again(char ch);
void print_rules(void);

int main(void)
{
	int roll_1, roll_2, roll_sum, point_count = 0, count_play = 0, wins = 0, loses = 0;
	Outcome outcome;
	Bool continue_rolling = TRUE, replay = TRUE;
	char ch;
	
	srand((unsigned)time(NULL));
	
	print_rules();
	
	while(replay)
	{
		continue_rolling = TRUE;
		point_count = 0;
		count_play = 0;
		while(continue_rolling)
		{
			roll_1 = roll_dice();
			roll_2 = roll_dice();
			roll_sum = roll_1 + roll_2;
			printf("You rolled: %d\n", roll_sum);
			outcome = play_game(roll_sum, count_play++);
			if(outcome == LOSE)
			{
				if(point_count <= 0)
				{
					printf("You lose...\n");
					continue_rolling = FALSE;
					loses++;
				}
				else
				{
					point_count--;
					printf("You lose, but you have another try!\n");
				}
			}
			else if(outcome == WIN)
			{
				printf("You win!\n");
				continue_rolling = FALSE;
				wins++;
			}
			else if(outcome == POINT)
			{
				if(point_count >= 1)
				{
					printf("You win!\n");
					continue_rolling = FALSE;
					wins++;
				}
				else
				{
					printf("You have obtained a point\n");
					point_count++;
				}
			}
		}
		printf("Do you want to play again?(y for yes another character for no): ");
		scanf(" %c", &ch);
		replay = play_again(ch);
	}
	
	printf("Total wins: %d\n", wins);
	printf("Total loses: %d\n", loses);
	
	exit(0);
}

Outcome play_game(int sum, int count_play)
{
	Outcome outcome;
	switch(sum)
	{
		case 7:
			if(count_play == 0)
				outcome = WIN;
			else
				outcome = LOSE;
			break;
		case 11:
			outcome = WIN;
			break;
		case 2: case 3: case 12:
			outcome = LOSE;
			break;
		default:
			outcome = POINT;
			break;
	}
	
	return outcome;
}

int roll_dice(void)
{
	return rand() % 6 + 1;
}

Bool play_again(char ch)
{
	Bool replay = FALSE;
	char answer = tolower(ch);
	if(answer == 'y')
	{
		replay = TRUE;
	}
	
	return replay;
}

void print_rules(void)
{
	printf("This is the CRAPS Game\n Here's the rules: \n");
	printf("1. If at the first roll you obtain a sum of 7 or 11 you'll win\n");
	printf("2. If you obtain a sum of 2, 3 or 12 you'll lose\n");
	printf("3. If you obtain another sum this is a point and 2 consecutive points means a win\n");
	printf("4. If you obtain a sum of 7 not a the first attempt you'll lose\n");
	printf("\n");
}
