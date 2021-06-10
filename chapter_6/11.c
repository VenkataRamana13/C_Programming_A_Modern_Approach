#include <stdio.h>
int main(){
    int n; long double a = 1.0f/1.0f, b = 1.0f, i = 1.0f;
    printf ("Enter the value of n: ");
    scanf ("%d", &n);
    for (; i <= n; i++){
        a = a/i;
        b = b+a;
    }
    printf ("The value of e for given n is: %Lf\n", b);

}