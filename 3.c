//easy way without arithmetic to print the reversal

#include <stdio.h>

int main()

{
    int i, j, k;

    printf("Enter the value of the 3-digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k);

    printf("The value of the reversal is: %d%d%d\n", k, j, i);

    return 0;
}