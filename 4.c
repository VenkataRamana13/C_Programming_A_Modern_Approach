#include <stdio.h>

int main()

{
    int i;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);

    int a = i / 8, b = a / 8, c = b / 8, d = c / 8, e = d / 8,
    p = i % 8, q = a % 8, r = b % 8, s = c % 8, t = d % 8, u = e %8;

    printf("The octal number is: %d%d%d%d%d\n", t, s, r, q, p);

    return 0;
    



}