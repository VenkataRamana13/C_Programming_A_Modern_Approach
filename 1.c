#include <stdio.h>
int main()

{
    int a;
    printf("Enter a two-digit number: ");
    scanf("%d", &a);

    int b = a / 10, c = a % 10, d = 10 * c + b;
    printf("The reversal is: %d\n", d);

    return 0;

}
//program to print the reversal of numbers...ex ab and ba.(two digit numbers)