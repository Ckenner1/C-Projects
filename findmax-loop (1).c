
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double max_detect( double t, double t1);

int main(void)
{  double t=0, t1=0, step, tolerance;
	 double diff, temp;
	 int max_detected = 0;
	 
	printf ("routine to find the maximum for y = 100*t - 16.0* t*t\n\n");
	
TOP:
	printf ("\nEnter tolerance/precison to detect height>");
	scanf("%lf", &tolerance);
	printf ("Enter step size>");
	scanf("%lf", &step);
	
	printf("\n\t\tt  \t   Height(ft) \t       t1  \t   Height(ft)\n");	
	
	t=0;
	t1=step;
	do
	{
	   diff= max_detect(  t,  t1);	
	   if (diff<0)
	     {
			temp = fabs(t1 - t)/2.0;
	     	t1 = t1 - temp;
	     	t=t-temp;
			step = temp/2;
	     }
      else
      {
       t += step;	            
	     t1 += step;
	    }
	}while (fabs(diff)>=tolerance);
	
	goto TOP;
	
	system("PAUSE");
	return(0);
}

double max_detect(double t,  double t1)
{
	double y, y1, diff;
	
	y = 100.0*t - 16.0* t*t;
	y1 = 100.0*t1 - 16.0* t1*t1;
	
  printf("\t %8.2lf  \t  %8.2lf  \t %8.2lf  \t  %8.2lf \n",t, y, t1,y1);
  
	diff = y1- y;
	return(diff);  
	
}

