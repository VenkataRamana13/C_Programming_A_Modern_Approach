//modify the program reverse.c to use (int)(sizeof (a)/sizeof (a[0])) for the array length
/*reverse.c
#include <stdio.h>
#define N 10
int main(){
    int a[N], i;
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    printf ("In reverse order: ");
    for (i = N - 1; i >= 0; i--){
        printf (" %d", a[i]);
    }
    printf ("\n");
    return 0;
}*/
#include <stdio.h>

int main(){
    int a[10], i;
    printf("Enter 10 numbers: ");
    for (i = 0; i < (int)(sizeof a/sizeof (a[0])); i++){
        scanf("%d", &a[i]);
    }
    printf ("In reverse order: ");
    for (i = (int)(sizeof (a)/sizeof (a[0])) - 1; i >= 0; i--){
        printf (" %d", a[i]);
    }
    printf ("\n");
    return 0;
}
