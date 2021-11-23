//unfinished //one value in output coming wrong
#include <stdio.h>
//arbitrary number of integers problem to be solved.
void selection_sort(int N, int a[N]);
int main(){
    printf("Enter %d integers: ", N);
    int a[N], i = 0;
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);}
    selection_sort(N, a);
    printf("In sorted order: ");
    for(i = 0; i<N; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;}
void selection_sort(int N, int a[N]){
    int j = 0; int max;int max_value;
    if (N == 0)
        return; 
    else {
       max_value = a[0];
       for (j = 0; j < N; j++){
           if (a[j] > max_value){
                max_value = a[j];
                max = j;}}}
        int k;
        k = a[N-1];
        a[N-1] = a[j];
        a[j] = k;
        selection_sort(N-1, a);}

