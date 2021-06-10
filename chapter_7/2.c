/*square2.c program
#include <stdio.h>
int main(){
    int i, n;
    printf ("This program prints a table of squares.\n");
    printf ("Enter number of entries in table: ");
    scanf ("%d", &n);
    for (i = 1; i<=n; i++)
    {
        printf("%10d%10d\n", i , i * i);
    }
}*/
#include <stdio.h>
int main(){
    int i, n;
    printf ("This program prints a table of squares.\n");
    printf ("Enter number of entries in table: ");
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 25 == 0){
            printf ("Please Enter to continue...");
            if (getchar() != '\n'){
                break;}
            else {
                printf ("%10d%10d\n", i, i*i);
            }    
            
        }
        else {
            printf ("%10d%10d\n", i, i*i);
        }
    }
}