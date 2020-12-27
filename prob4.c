#include <stdio.h>
int main()
// doubt it shows error.
{
float given, recieved;
printf("Enter your amount:$%f",given);
scanf("%f",&given);

recieved = (21/20) * given;

printf("The amount after adding 5% taxes is:$ %.2f\n", recieved);

return 0;
}
