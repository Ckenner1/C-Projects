# include <stdio.h>
# include <math.h>

int main(void)
{
	int fives, ones, quarters, dimes, nickels, pennies, number;
	
	
	printf ("Change Calculater\n");
	printf ("Enter a value >");
	scanf ("%i", &number);

	fives= number/500;
	number= number%500;
	ones= number/100;
	number= number%100;
	quarters= number/25;
	number= number%25;
	dimes= number/10;
	number= number%10;
	nickels= number/5;
	number= number%5;
	pennies= number/1;
	number= number%1;
	
	printf("\n\nThe number of fives %i \n", fives);
	printf("The number of ones %i\n", ones);
	printf("The number of quarters %i\n", quarters);
	printf("The number of dimes %i\n", dimes);
	printf("The number of nickels %i\n", nickels);
	printf("The number of pennies %i\n",pennies);
	
	return(0);
}
