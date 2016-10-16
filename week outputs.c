//Collin kenner
//4/28/2015
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define NROW 8
#define NCOL 7
#define FILENAME "power1.txt"
int main(void)
{
	int i,j,power[NROW][NCOL],col_sum=0;
	float max=0,min=0;
	FILE *file_in;
	file_in=fopen(FILENAME,"r");
	if(file_in == NULL)
	printf("Error opening input file. \n");
	else
	{
	printf("All powerplant outputs over an 8 week period\n\n");
	printf("\t Day1 Day2 Day3 Day4 Day5 Day6 Day7 WeekTotal\n");
	printf("-------------------------------------------------------------");
		min=500;
		for(i=0; i<=NROW-1; i++)
		{
			printf("\nweek %i  ",i+1);
			col_sum=0;
			for(j=0;j<=NCOL-1;j++)
			{
				fscanf(file_in,"%i",&power[i][j]);
				col_sum += power[i][j];
				printf(" %4i",power[i][j]);
				if(min>power[i][j])
					min=power[i][j];
				if(power[i][j]>=max)
					max=power[i][j];
			}
			printf("   %4i  ",col_sum);
		}
	printf("\nMinimum and Maximum powerplant outputs over an 8 week period\n");
		for(i=0; i<=NROW-1; i++)
		{
			for(j=0;j<=NCOL-1;j++)
			{
				fscanf(file_in,"%i",&power[i][j]);
				if(power[i][j]==max)
					printf("\nweek %i, day %i was a maximum power out day of %3.2f Megawatts", i,j+1,max);
				if(power[i][j]==min)
					printf("\nweek %i, day %i was a minimum power out day of  %.2f Megawatts", i, j+1, min);
			}

		}

	
	}
	return(0);
}
