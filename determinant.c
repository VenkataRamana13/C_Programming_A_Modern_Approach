//18jan2022
#include <stdio.h>
int determinant (int N, int *a){
    if(N == 3){                     //calulating determinant using sarru's rule. 
        int det, sum = 0; 
        int i = 0;
        for (int j = 0; j < N; j++){
            det = 1;
            for(int b = 0; b < N; b++){
                det = det * (*(a + N*(i + b) + ((j + b) % N)));
            }
            sum += det;
        }
        int diff = 0; 
        i = N - 1; 
        for(int j = 0; j < N; j++){
            det = 1; 
            for(int b = 0; b < N; b++){
                det = det * (*(a + N*(i - b) + ((j + b) % N)));
            }
            diff += det;
        }
        return (sum - diff);
        }
    else if(N == 2){                 //determinant for square matrix of size 2
        return ((a[3] * a[0]) - (a[1] * a[2]));
    }
    else if(N == 1){             //for completeness
        return (*a);
    }
    else {                      //calculating determinant for higher orders. 
        enum {ODD = -1, EVEN = 1} sign; 
        int i = 0, sum = 0; 
        for (int j = 0; j < N; j++){
            if(j % 2 == 0)
                sign = EVEN; 
            else 
                sign = ODD; 
            sum += (sign * a[j] * determinant(N - 1, a + N + j + 1));
        }
        return sum;
    }
}
int main(){
    int N;
    scanf("%d", &N);
    int a[N][N];
    for (int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &a[i][j]);
        }
        }
    printf("%d\n", determinant(N, &a[0][0]));
}
    
