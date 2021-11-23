#include <stdio.h>
int main(){
    printf ("Enter a US dollar amount: ");
    int x;
    scanf ("%d", &x);
    int a_20 = x / 20; int b_10 = (x % 20) / 10; int c_5 = (x % 10) / 5; int d_1 = x % 5;
    printf ("$20 bills: %d\n", a_20);
    printf ("$10 bills: %d\n", b_10);
    printf ("$5 bills: %d\n", c_5);
    printf ("$1 bills: %d\n", d_1);
}