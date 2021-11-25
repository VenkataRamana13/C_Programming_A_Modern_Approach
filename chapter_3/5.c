#include <stdio.h>
int Row_sum(int [], int);int Column_sum(int a[], int n); 
int main(){
    int a[16], i = 0;
    printf("Enter numbers from 1 to 16 in any order: ");
    for(i = 0; i < 16; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 16; i++){
        if(i % 4 == 3)
            printf("%d\n", a[i]);
        else
            printf("%d\t", a[i]);
            }
    printf("Column sums: %d %d %d %d\n", Row_sum(a, 0) , Row_sum(a, 1) , Row_sum(a, 2), Row_sum(a, 3));
    printf("Row sums: %d %d %d %d\n", Column_sum(a, 0), Column_sum(a, 4), Column_sum(a, 8), Column_sum(a, 12));
    printf("Diagonal sums: %d %d\n", a[0] + a[5] + a[10] + a[15], a[3] + a[6] + a[9] + a[12]);
}
int Row_sum(int a[], int n){
    int sum = a[n] + a[n+4] + a[n+8] + a[n+12];
    return sum;
}
int Column_sum(int a[], int n){
    int sum = a[n] + a[n+1] + a[n+2] + a[n+3];
    return sum;}

