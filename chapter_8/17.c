#include <stdio.h>
int main(){
    int n;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\nEnter the size of magic square: ");   //introduction
    scanf("%d", &n);
    int array[n][n], a1, a2, j, i;          //magic square declaration
    for (j = 0; j<n; j++){
        for (i = 0; i<n; i++){
            array[i][j] = 0;}}
    array[0][n/2] = 1;              //placing 1
    a1 = 0; a2 = n/2;               
    for (j = 2; j < n*n + 1; j++){
        if (a1 == 0)
            a1 = n - 1;
        else 
            a1 = a1 - 1;
        if (a2 == n - 1)
            a2 = 0;
        else 
            a2 = a2 + 1;
        if (array[a1][a2] == 0)
            array[a1][a2] = j;
        else{
            if (a1 == n-1)
                a1 = 0;
            else
                a1 = a1 + 1;
            if (a2 == 0)
                a2 = n-1;
            else 
                a2 = a2 -1;
            a1 = a1 + 1;
        }
    }
    
    for (a1 = 0; a1<n; a1++)
    {           //printing values
        for (a2 = 0; a2 < n; a2++){
            printf("%d\t", array[a1][a2]);
        }
        printf("\n");
        }
}
