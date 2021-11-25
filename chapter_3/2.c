#include <stdio.h>
int main(){
    int item, a, b, c;
    float price;
    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &a, &b, &c);
    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d\n", item, price, a, b, c);
