#include <stdio.h>
int main(){
    char a[100], terminating_char; int n, i = 0; int j; int k;
    printf("Enter a sentence: ");
    while((a[i++]=getchar()) != '\n')
        ;
    char b[i]; char c[i];

    
    for (n = 0; n < i - 1; n++){
        b[n] = a[n];
    }
    terminating_char = b[i - 2];
    
    j = n-1;
    for (i=n; i>=0; i--){
        if (b[i] == ' '){
            for(k = i; k<=j-1; k++){
                printf("%c", b[k]);
            }
        j = i;}
        else if(i == 0){
            printf(" ");
            for(k = i; k<=j-1; k++){
                printf("%c", b[k]);}
        }    
    }
    printf("%c", terminating_char);
    printf("\n");
}
