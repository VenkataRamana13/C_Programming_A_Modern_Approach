#include <stdio.h>
int main(){
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    int n = amount;
    int a = n / 20, b = (n % 20) / 10, c = (n % 10) / 5, d = (n % 5);
    printf("\n$20 bills: %d\n", a);
    printf("$10 bills: %d\n", b);
    printf("5 bills: %d\n", c);
    printf("$1 bills: %d\n", d);
}

