//Collin Kenner
//final project

#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

int i,j;
void clear_grid(char grid[ROWS][COLS]);
int test_input(char input, char grid[ROWS][COLS],int i, int j,int n);
void display_grid(char grid[ROWS][COLS]);
int test_winning(char grid[ROWS][COLS]);
int main(void)
{
	char grid[ROWS][COLS],input;
	int i,j,k,n=1,l;
	printf("Tic Tac Toe!\n");
	clear_grid(grid);
	while(l==1)
	{
		do
		{
		printf("player %i turn\n",n);
		printf("Enter with Spaces: Row, Col, X or O>");
		scanf("%i %i %c",& i, & j,&input);
		i=i-1;
		j=j-1;
		input=tolower(input);
		k=test_input(input,grid,i,j,n);
		}while(k==1);
		grid[i][j]=input;
		display_grid(grid);
		if(n==1)
		{
			n=2;
		}
		else if(n==2)
		{
		n=1;
		}
		l=test_winning(grid);
	}
	
	
	
}

void clear_grid(char grid[ROWS][COLS])
{
	int i,j;
	for(i=0;i<=ROWS-1;i++)
	{
		for(j=0;j<=COLS-1;j++)
		{
			grid[i][j]=' ';
		}
	}
}

int test_input(char input, char grid[ROWS][COLS],int i, int j,int n)
{
	if(n==1&&input!='o')
	{
		printf("Player 1 may only input O\n");
		return(1);
	}
		if(n==2&&input!='x')
	{
		printf("Player 2 may only input X\n");
		return(1);
	}
	if( i>3||j>3)
	{
		printf("Row and Column must be between 1 and 3\n");
		return(1);
	}
	if( i<0||j<0)
	{
		printf("Row and Column must be between 1 and 3\n");
		return(1);
	}
	
	if(input!='x'&&input!='o')
	{
	printf("Invalid characters, X or O required\n");
	return(1);
	}
	if(grid[i][j]!=' ')
	{
		printf("Row = %i, Col=%i is already taken\n",i,j);
		return(1);
	}
	return(0);
}
void display_grid(char grid[ROWS][COLS])
{
	printf("\t\t\t\t   %c | %c | %c\n",grid[0][0],grid[0][1],grid[0][2]);
	printf("\t\t\t\t  ___________\n");
	printf("\t\t\t\t   %c | %c | %c\n",grid[1][0],grid[1][1],grid[1][2]);
	printf("\t\t\t\t  ___________\n");
	printf("\t\t\t\t   %c | %c | %c\n",grid[2][0],grid[2][1],grid[2][2]);
}
int test_winning(char grid[ROWS][COLS])
{
    int xrows[ROWS] = { 0 };
    int orows[ROWS] = { 0 };
    int xcols[COLS] = { 0 };
    int ocols[COLS] = { 0 };
    int xdiag[2] = { 0 };
    int odiag[2] = { 0 };

    int current_row, current_col;

    for (current_row = 0; current_row < ROWS; current_row++)
    {
        for (current_col = 0; current_col < COLS; current_col++)
        {
            if ((xrows[current_row] += (grid[current_row][current_col] == 'x')) == 3)
            {
                printf("Player 2 Wins\n");
                return 0;
            }
            else if ((orows[current_row] += (grid[current_row][current_col] == 'o')) == 3)
            {
                printf("Player 1 Wins\n");
                return 0;
            }
        }
    }
    for (current_col = 0; current_col < COLS; current_col++)
    {
        for (current_row = 0; current_row < ROWS; current_row++)
        {
            if ((xcols[current_col] += (grid[current_row][current_col] == 'x')) == 3)
            {
                printf("Player 2 Wins\n");
                return 0;
            }
            else if ((ocols[current_col] += (grid[current_row][current_col] == 'o')) == 3)
            {
                printf("Player 1 Wins\n");
                return 0;
            }
        }
    }
    for (current_col = 0, current_row = 0; current_col < COLS; current_col++, current_row++)
    {
        if ((xdiag[0] += (grid[current_row][current_col] == 'x')) == 3)
        {
            printf("Player 2 Wins\n");
            return 0;
        }
        else if ((odiag[0] += (grid[current_row][current_col] == 'o')) == 3)
        {
            printf("Player 1 Wins\n");
            return 0;
        }
    }
    for (current_col = COLS-1, current_row = 0; current_col >= 0; current_col--, current_row++)
    {
        if ((xdiag[1] += (grid[current_row][current_col] == 'x')) == 3)
        {
            printf("X Wins\n");
            return 0;
        }
        else if ((odiag[1] += (grid[current_row][current_col] == 'o')) == 3)
        {
            printf("O Wins\n");
            return 0;
        }
    }

    return 1;
}
