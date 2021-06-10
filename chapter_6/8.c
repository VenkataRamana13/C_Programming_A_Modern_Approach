#include <stdio.h>
int main(){
    int a, n, i;
    printf ("Enter number of days in a month: ");
    scanf("%d", &n);
    printf ("Enter starting day of the week (1 = Sun, 7 = Sat): ");
    scanf ("%d", &i);
    for (a = 1; a <= n + i - 1; a++)
    {
        if(a<i)
        {
            printf("   ");
        }
        else{
        if (a == 7 || a == 14 || a == 21 || a == 28)
        {
            printf ("%2d \n", a - i + 1);
        }
        else if (a == n + i - 1){
            printf ("%2d\n", a - i + 1);
        }
        else 
        {
            printf ("%2d ", a - i + 1);
        }
        }
    }
}