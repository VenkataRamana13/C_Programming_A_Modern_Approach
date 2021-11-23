#include <stdio.h>
int main()
{
    int i, num;
    printf ("Enter a number: ");
    scanf ("%d", &num);
    for (i = 0; num > 0; i++)
    {
        num = num / 10;
    }
    printf ("The number has %d digits.\n",  i);
}