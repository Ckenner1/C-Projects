//Collin Kenner

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Function_Max(double t, double t1);

int main(void)
{
	double t1=0,t=0,step,tolerance,diff,temp;
	int c;
	
	printf("routine to find the maximum for y = -16*t*t + 100*t");
do
 {
	printf("\npress 1 to continue or 0 to quit>");
	scanf("%i",&c);
	printf("\nEnter tolerance/precision to detect height>");
	scanf("%lf",&tolerance);
	printf("Enter step size>");
	scanf("%lf",&step);
	
	t=0;
	t1=step;
	
	printf("\n\n\t\tt\t    Height(ft)\t         t1\t        Height(ft)");
	do
	{
		diff=Function_Max(t,t1);
		
		if(diff<0)
		{
			temp=fabs(t1-t)/2;
			t=t-temp;
			t1=t1-temp;
			step=step/2;
		}
		else if(diff>0)
		{
		t+=step;
		t1+=step;
		}
	}
	while(fabs(diff)>tolerance);
 }
while(c==1);
return(0);
}
double Function_Max(double t, double t1)
{
	double y,y1,diff;
	y= -16*t*t + 100*t;
	y1= -16*t1*t1 + 100*t1;
	diff=y1-y;
	printf("\n\t     %.2f\t       %.2f\t       %.2f\t          %.2f",t,y,t1,y1);
	return(diff); 
}
