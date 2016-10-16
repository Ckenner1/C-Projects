/*Collin Kenner
Cis 217
Quadratic equation program*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
float a, b, c, d, e, x, y, f, g, h;

printf("Quadratic Equation Root Calculator aX^2+bX+c\n");
TOP:
printf("Enter a>");
scanf("%f",&a);
printf("Enter b>");
scanf("%f",&b);
printf("Enter c>");
scanf("%f",&c);
if(b*b-4*a*c<0)
{
	f= b*b/4*c;
	g= b*b/4*c;
	h= 2*sqrt(a*c);
	printf("Input a must be less than or equal to %3.2f\n", f);
	printf("Input b must be greater than or equal to %1.0f\n", h);
	printf("Input c must be less than or equal to %3.2f\n", g);
	goto TOP;
}	
if(a==0)
{
	printf("invalid input values, 'a' cannot be 0 \n");
	goto TOP;
}
d=sqrt(b*b-4*a*c);
e=2*a;
x=(-b+d)/e;
y=(-b-d)/e;

printf("The roots are x =  %f and %f", x, y);
return(0);

}
