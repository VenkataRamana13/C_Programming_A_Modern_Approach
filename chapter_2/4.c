#include <stdio.h>
int main(){
    float amount;
    printf("Enter a dollars and cents amount: ");
    scanf("%f", &amount);
    float incremented_amount = 1.05f * amount;
    printf ("With tax added: %0.2f\n", incremented_amount);
}