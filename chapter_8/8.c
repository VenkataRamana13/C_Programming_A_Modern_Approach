#include <stdio.h>
int main(){
    int a[5][5], i, k, row_sum[5] = {0}, column_sum[5] = {0}, largest[5]= {0}, smallest[5] = {100, 100, 100, 100, 100};
    int max;
    for (k = 0; k < 5; k++){
        printf("Enter student %d marks: ", k+1);
        for (i = 0; i < 5; i++){
            scanf("%d", &a[k][i]);
        }
    }
    for(i = 0; i < 5; i++){
        for (k = 0; k < 5; k++){
            row_sum[i] += a[k][i];
            column_sum[i] += a[k][i];
        }
    }
    printf("\n\n");
    for (i = 0; i < 5; i++){
        printf("Total score for student %d: %d\n", i + 1, row_sum[i]);
        printf("Average score for student %d: %f\n\n", i+1, (float)row_sum[i]/5.0f);
    }
    printf("\n\n");
    for (i = 0; i < 5; i++){
        printf("Average score for %d quiz: %f\n",i+1, (float)column_sum[i]/5.0f);
    }
    printf("\n"); 
    //for high score and low score in each quiz
    
    for (i = 0; i < 5; i++){
        max=0;
        for (k = 0; k < 5; k++){
            //for high score
            if (a[k][i] > largest[i]){
                largest[i] = a[k][i];
            }
        }
        printf("The highest score in quiz %d is %d\n", i + 1, largest[i]);
        for (k = 0; k < 5; k++){
            if (a[k][i] < smallest[i]){
                smallest[i] = a[k][i];
            }
        }
        printf("The least score in quiz %d is %d\n\n", i + 1, smallest[i]);
    }
}
