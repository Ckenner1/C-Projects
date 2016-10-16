#include <stdio.h>
#include <math.h>

int main(void)
{
float angle_one,angle_two, lift_one, lift_two, new_angle, lift_new,ratio, b_value;

printf("This program uses linear interpolation to compute the coefficient of lift for an angle from a wind tunnel test\n\n");
printf("Use degrees for all angle measurements\n\n");
printf("Enter first angle and lift coefficient with a space between them>");
scanf("%f %f",&angle_one, &lift_one);
printf("Enter second angle and lift coefficient with a space between them>");
scanf("%f %f",&angle_two, &lift_two);
printf("Enter new angle>");
scanf("%f",&new_angle);

ratio=(lift_two-lift_one)/(angle_two-angle_one);
b_value= (lift_one-(ratio*angle_one));
lift_new= new_angle*ratio+b_value;
printf("New lift coefficient:%4.3f",lift_new);

return(0);
}
