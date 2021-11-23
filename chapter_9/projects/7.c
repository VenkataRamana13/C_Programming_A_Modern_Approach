//power function original

/*
int power(int x, int n){
    if(n == 0)
        return 1;
    else
        return x * power(x, n-1);
}
*/

#include <stdio.h>
int power(int x, int n);
int main(){
    int x, n;
    printf("Enter the value of x and n: ");
    scanf("%d,%d", &x, &n);
    printf("The computed exponent value is: %d\n", power(x, n));
}
int power(int x, int n){
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power(x, n/2) * power(x, n/2);
    else 
        return x * power(x, n-1);}


