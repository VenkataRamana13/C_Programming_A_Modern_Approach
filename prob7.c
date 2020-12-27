#include <stdio.h>
int main()

{int x;
printf("Enter a Dollar amount: ");
scanf("%d", &x);

int y = x/20, z = (x-20*y)/10, w =( x - 20*y -10*z)/5, a = (x - 20*y - 10*z -5*w);
printf("$20 bills: %d\n", y);
printf("$10 bills: %d\n", z);
printf("$5 bills: %d\n", w);
printf("$1 bills: %d\n", a);

return 0;
}

