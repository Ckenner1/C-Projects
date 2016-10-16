//Collin Kenner
//3/5/2015
//CIS 217

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define FOREVER 1
int main(void)
{
	float temperature, celsius, fahrenheit, kelvin, rankin;
	int conversion_option ;
	char a, b, c, d, e, f, g;
	
	printf("Enter a temperature >");
	scanf("%f",& temperature);
	printf("\nTemperature Conversions");
	printf("\n1.	    Fahrenheit -> Celsius");
	printf("\n2.	    Celsius -> Fahrenheit");
	printf("\n3.	    Celsius -> Kelvin");
	printf("\n4.	    Kelvin -> Celsius");
	printf("\n5.	    Kelvin -> Rankin");
	printf("\n6.	    Rankin -> Kelvin");
	printf("\n7.	    Exit");
	
	while(FOREVER)
	{
		printf("\n\nSelect a conversion option 1-6 >");
		scanf("%i",&conversion_option);
		
		if(conversion_option == 1)
			{
			celsius = (temperature-32)*5/9;
			printf("\nCelsius = %g",celsius);
			}
		
		else if(conversion_option == 2)
			{
			fahrenheit = temperature*9/5+32;
			printf("\nFahrenheit = %g", fahrenheit);
			}
			
		else if(conversion_option == 3)
			{
			kelvin = temperature+273.15;
			printf("\nKelvin = %g", kelvin);
			}
			
		else if(conversion_option == 4)
			{
			celsius = temperature-273.15;
			printf("\nCelsius = %g", celsius);
			}
		
		else if(conversion_option == 5)
			{	
			rankin = temperature*9/5;
			printf("\nRankin = %g", rankin);
			}
			
		else if(conversion_option == 6)
			{
			kelvin = temperature*5/9;
			printf("\nKelvin = %g", kelvin);
			}
			
		else if(conversion_option == 7)
			{
			break;
			}
	}
		
	return (0);
}
