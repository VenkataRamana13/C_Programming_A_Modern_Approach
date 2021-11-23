/*repdigit.c
#include <stdio.h>
#include <stdbool.h>

int main(){
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf ("Enter a number: ");
    scanf ("%d", &n);

    while (n>0){
        digit = n % 10;
        if (digit_seen[digit]){
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    if (n > 0)
    {
        printf("Repeated digit\n");
    }
    else{
        printf("No repeated digit\n");
    }
    return 0;
}*/
#include <stdio.h>

int main(){
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf ("Enter a number: ");
    scanf ("%ld", &n);

    while (n>0){
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }
    printf("digit:       ");
    int i;
    for (i = 0; i < 10; i++){
        printf("%d\t", i);
    }
    printf("\n");
    printf("Occurrences: ");
    for (i= 0; i < 10; i++){
        printf("%d\t", digit_seen[i]);
    }
 
    printf("\n");
}