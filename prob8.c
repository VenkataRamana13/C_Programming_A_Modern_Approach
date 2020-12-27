
#include <stdio.h>
int main()
{
float x, y, z;
printf("Enter amount of loan: ");
scanf("%f", &x);
printf("Enter interest rate: ");
scanf("%f", &y);
printf("Enter monthly payment: ");
scanf("%f", &z);

float a = ( x-z)*(100+y/12)/100,b = (a -z)*(100+y/12)/100,c = (b -z)*(100+y/12)/100;
printf("Balance remaining after first payment: %.2f\n",a);
printf("Balance remaining after second payment: %.2f\n",b);
printf("Balance remaining after third payment: %.2f\n", c);

return 0;
}
