//modify the repdigit.c program so that the user can enter more than one number to be tested for repeated digits. The program should
//terminate when the user enters a number thats less than or equal to zero.

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
#include <stdbool.h>
int main(){
    int digit;
    long n, m;
    do {
        bool digit_seen[10] = {false};
        printf ("Enter a number: ");
        scanf ("%ld", &m);
        if (m <= 0){
            break;
        }
        n = m;
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
    } while (m > 0);
    printf ("Goodbye\n");
    return 0;
}