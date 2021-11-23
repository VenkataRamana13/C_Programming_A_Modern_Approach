/*//program to calculate the lowest terms of fraction
//done by calculating the gcd of the terms and by dividing by it.
#include <stdio.h>
int main(){
    int numerator, denominator, m, n, r, gcd;
    printf ("Enter the fraction (in numerator/denominator format): ");
    scanf("%d/%d", &numerator, &denominator);
    if (numerator > denominator){
        m = numerator; n = denominator;}
    else if  (denominator > numerator){
        m = denominator; n = numerator;}
    else {gcd = numerator;}
    do {
        r = m % n;
        m = n;
        n = r;
    }while (r != 0);
    printf ("The fraction in reduced form is: %d/%d\n", numerator/m , denominator/m);
}*/
#include <stdio.h>
void reduce(int, int, int *, int *);
int main(){
    int numerator, denominator, reduced_numerator, reduced_denominator;
    printf("Enter the fraction (in numerator/denominator format): ");
    scanf("%d/%d", &numerator, &denominator);
    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    printf("The fraction in reduced form is: %d/%d\n", reduced_numerator, reduced_denominator);
}
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
    int m, n, gcd, r;
    if (numerator > denominator){
        m = numerator; n = denominator;}
    else if  (denominator > numerator){
        m = denominator; n = numerator;}
    else {gcd = numerator;}
    do {
        r = m % n;
        m = n;
        n = r;
    }while (r != 0);
    *reduced_numerator = numerator/m; *reduced_denominator = denominator/m;}
