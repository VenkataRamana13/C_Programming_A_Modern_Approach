#include <stdio.h>
int main(){
    int a[5][5], i, k, row_sum[5] = {0}, column_sum[5] = {0};
    for (k = 0; k < 5; k++){
        printf("Enter row %d: ", k+1);
        for (i = 0; i < 5; i++){
            scanf("%d", &a[k][i]);
        }
    }
    for(i = 0; i < 5; i++){
        for (k = 0; k < 5; k++){
            row_sum[i] += a[i][k];
        }
    }
    for(i = 0; i < 5; i++){
        for (k = 0; k < 5; k++){
            column_sum[i] += a[k][i];
        }
    }
    printf("Row Totals: ");
    for (i = 0; i < 5; i++){
        printf("%d\t", row_sum[i]);
    }
    printf("\nColumn Totals: ");
    for (i = 0; i < 5; i++){
        printf("%d\t", column_sum[i]);
    }
    printf("\n");
}