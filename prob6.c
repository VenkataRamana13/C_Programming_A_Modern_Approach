#include <stdio.h>
int main()
{ 
int x;
printf("Enter the value of x: ");
scanf("%d", &x);

int y = (((((3*x + 2)*x-5)*x-1)*x+7)*x-6);
printf("The value of y is: %d\n", y);
}
