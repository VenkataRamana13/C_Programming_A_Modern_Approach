//programming project 5 of chapter 5
/*#include <stdio.h>
int main(){
    float income, tax;
    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);
    if (income <= 750)
        tax = 0.01 * income;
    else if (income > 750 && income <= 2250)
        tax = 7.50 + 0.02 * income;
    else if (income > 2250 && income <= 3750)
        tax = 37.50 + 0.03 * income;
    else if (income > 3750 && income <= 5250)
        tax = 82.50 + 0.04 * income;
    else if (income > 5250 && income <= 7000)
        tax = 142.50 + 0.05 * income;
    else 
        tax = 230 + 0.06 * income;
    printf("Tax due: $%f\n", tax);
}*/
#include <stdio.h>
float tax(float income);
int main(){
    float income;
    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);
    printf("Tax due: %0.2f\n", tax(income));
}
float tax(float income){
    if (income <= 750)
        return 0.01 * income;
    else if (income > 750 && income <= 2250)
        return 7.50 + 0.02 * income;
    else if (income > 2250 && income <= 3750)
        return 37.50 + 0.03 * income;
    else if (income > 3750 && income <= 5250)
        return 82.50 + 0.04 * income;
    else if (income > 5250 && income <= 7000)
        return 142.50 + 0.05 * income;
    else 
        return 230 + 0.06 * income;}

    
