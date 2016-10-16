#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int value, tab;
void display_dice(int value, int tab);
int game_rules(int value, int tab,int n,int score1, int score2);

int main(void)
{ 
	int player1=0, player2=0, score1=0, score2=0, player, n=1, dice, score;
	unsigned int seed;
	printf("This game rolls dice for 2 players\n");
	printf("\nplayer %i enter 1 to roll dice or 2 to end game>",n);
	scanf("%i",&player);
	
	while(player==1)
	{
		time_t   seed;
		(void)time(&seed);
		srand((long)seed);
		value=rand()%6+1;	
		tab=rand()%6+1;
		display_dice( value, tab);
		if(n==1)
			score1=game_rules(value, tab, n,score1,score2);
		if(n==2)
			score2=game_rules(value,tab, n,score1,score2);
		if(n==1)
		n=2;
		else if(n==2)
		n=1;
	printf("\nplayer %i enter 1 to roll dice or 2 to end game>",n);
	scanf("%i",&player);
	}
	if(score1>score2)
	printf("\nPLAYER 1 WINS!!!");
	if(score2>score1)
	printf("\nPLAYER 2 WINS!!!!");
	else if(score1==score2)
	printf("\nIT'S A TIE!!!'");
	return(0);
}

void display_dice(int value, int tab)
{
	switch(value)
	{
	
	case 1:
		printf("\t\t\t\t...........\n");
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t:    *    :\n");
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t...........\n");
		break;	
	
	case 2:
		printf("\t\t\t\t...........\n");
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t:      *  :\n");	
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t:  *      :\n");
		printf("\t\t\t\t...........\n");
		break;
	
	case 3:
		printf("\t\t\t\t...........\n");
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t:    *    :\n");
		printf("\t\t\t\t...........\n");
	    break;
	
	case 4:
		printf("\t\t\t\t...........\n");
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t...........\n");
		break;
	case 5:
		printf("\t\t\t\t...........\n");
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t:    *    :\n");
		printf("\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t...........\n");
		break;
	case 6:
		printf("\t\t\t\t...........\n");
		printf("\t\t\t\t:         :\n");
		printf("\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t...........\n");
		break;
	}
	switch(tab)
	{
	
	case 1:
		printf("\t\t\t\t\t...........\n");
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t:    *    :\n");
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t...........\n");
		break;	
	
	case 2:
		printf("\t\t\t\t\t...........\n");
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t:      *  :\n");	
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t:  *      :\n");
		printf("\t\t\t\t\t...........\n");
		break;
	
	case 3:
		printf("\t\t\t\t\t...........\n");
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t:    *    :\n");
		printf("\t\t\t\t\t...........\n");
	    break;
	
	case 4:
		printf("\t\t\t\t\t...........\n");
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t\t...........\n");
		break;
	case 5:
		printf("\t\t\t\t\t...........\n");
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t\t:    *    :\n");
		printf("\t\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t\t...........\n");
		break;
	case 6:
		printf("\t\t\t\t\t...........\n");
		printf("\t\t\t\t\t:         :\n");
		printf("\t\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t\t:  *   *  :\n");
		printf("\t\t\t\t\t...........\n");
		break;
	}
}
int game_rules(int value, int tab, int n,int score1, int score2)
{
	int score;
	
	if(value==1&&tab==1)
		score=100;
	
	if(value==6&&tab==6)
		score=50;
	
	if(value==5&&tab==5)
		score=25;
	
	if(value==4&&tab==4)
		score=25;
	
	if(value==3&&tab==3)
		score=25;
	
	if(value==2&&tab==2)
		score=25;
	else if(value!=tab)
		score=tab+value;
	
	if(n==1)
	{
	score1=score+score1;
	printf("player1 score is %i\t player2 score is %i",score1, score2);
	return (score1);
	}
	
	if(n==2)
	{
	score2=score+score2;
	printf("player1 score is %i\t player2 score is %i",score1, score2);
	return (score2);
	
	}
}
