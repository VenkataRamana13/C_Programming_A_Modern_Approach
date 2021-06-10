/*square2.c program
#include <stdio.h>
int main(){
    int i, n;
    printf ("This program prints a table of squares.\n");
    printf ("Enter number of entries in table: ");
    scanf ("%d", &n);
    for (i = 1; i<=n; i++)
    {
        printf("%10d%10d\n", i , i * i);
    }
}*/
//46341 is the smallest number to int that causes failure
//code crashed and went into an infinite loop for 32767(n) in short.
//The max value of long int i checked is 3200000(its fucking huge)im moving on.
#include <stdio.h>
int main(){
    long i, n;
    printf ("This program prints a table of squares.\n");
    printf ("Enter number of entries in table: ");
    scanf ("%ld", &n);
    for (i = 1; i<=n; i++)
    {
        printf("%15ld%15ld\n", i , i * i);
    }
}