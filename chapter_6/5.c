#include <stdio.h>
int main(){
    int n, m;
    printf ("Enter the value of n: ");
    scanf ("%d", &n);
    printf ("Digits reversed: ");
    do {
        m = n % 10;
        n = n / 10;
        printf ("%d", m);
    }while ( n != 0);
    printf ("\n");
}