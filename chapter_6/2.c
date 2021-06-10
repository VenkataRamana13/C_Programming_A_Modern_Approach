#include <stdio.h>
int main(){
    int a, b, m, n, r, gcd;
    printf ("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
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
    printf ("The gcd of the 2 numbers is : %d\n", m);

}