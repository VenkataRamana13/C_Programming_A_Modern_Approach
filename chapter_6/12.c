#include <stdio.h>
int main(){
    long double n; long double a = 1.0f/1.0f, b = 1.0f, i = 1.0f;
    printf ("Enter the value of {|}(the small floating point number until which to add terms): ");
    scanf ("%Lf", &n);
    for (;; i++){
        a = a/i;
        if (a < n)
        {
            break;
        }
        b = b+a;
    }
    printf ("The value of e for given {|} is: %Lf\n", b);
    printf ("The size of the characters n, a, b, i is: %ld, %ld, %ld, %ld\n", sizeof(n), sizeof(a), sizeof(b), sizeof(i));
}