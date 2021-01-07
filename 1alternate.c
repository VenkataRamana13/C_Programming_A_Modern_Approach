#include <stdio.h>
int main()
{
    int N, n, d;
    printf("Enter a number: ");
    scanf("%d", &N);

    d = 0;
    do
    {
        n = N / 10;
        ++d;
    }
    while (n > 0);

    printf("The number %d has %d digits\n", N, d);

    return 0;
}