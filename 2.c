#include <stdio.h>

int main()

{
    int x;
    printf("Enter the value of the 3-digit number: ");
    scanf("%d", &x);

    int a = x / 100, b = (x % 100) / 10, c = x % 10;

    printf("The reversal is: %d\n", c * 100 + b * 10 + a);

    return 0;
}
//To print the reversal of a 3-digit number such as abc to cba.