//program to calculate the lowest terms of fraction
//done by calculating the gcd of the terms and by dividing by it.
#include <stdio.h>
int main(){
    int a, b, m, n, r, gcd;
    printf ("Enter the fraction (in a/b format): ");
    scanf("%d/%d", &a, &b);
    if (a > b){
        m = a; n = b;}
    else if  (b > a){
        m = b; n = a;}
    else {gcd = a;}    
    do {
        r = m % n;
        m = n;
        n = r;
    }while (r != 0);
    printf ("The fraction in reduced form is: %d/%d\n", a/m , b/m);
}