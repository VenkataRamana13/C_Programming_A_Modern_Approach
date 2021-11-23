#include <stdio.h>
int polynomial(int x);
int power(int x, int n);
int main(){
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("The value of the polynomial is: %d\n", polynomial(x));
    }

int polynomial(int x){
    return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2)+ 7 * x - 6;
}
int power(int x, int n){
    if (n == 0)
        return 1;
    else 
        return x * power(x, n-1);
}
