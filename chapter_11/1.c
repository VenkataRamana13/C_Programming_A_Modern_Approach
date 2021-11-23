/*int main(){
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    int n = amount;
    int a = n / 20, b = (n % 20) / 10, c = (n % 10) / 5, d = (n % 5);
    printf("\n$20 bills: %d\n", a);
    printf("$10 bills: %d\n", b);
    printf("5 bills: %d\n", c);
    printf("$1 bills: %d\n", d);
}*/
//programming project 7 from chapter 2 above 
#include <stdio.h>
void pay_amount(int, int *, int *, int *, int *);
int main(){
    int dollars, twenties, tens, fives, ones;
    printf("Enter a dollars amount: ");
    scanf("%d", &dollars);
    pay_amount(dollars, &twenties, &tens, &fives, &ones);
    int a[] = {twenties, tens, fives, ones};
    int j = 20;
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        printf("%d bills: %d\n", j, a[i]);
        if(i < 2)
        {
            j/=2;
        }
        else{
            j = 1;
        }
    }
}
void pay_amount(int dollars,int *twenties, int *tens, int *fives, int *ones){
    *twenties = dollars/20; *tens = (dollars % 20)/10; *fives = (dollars % 10)/5; *ones = dollars % 5;
}

