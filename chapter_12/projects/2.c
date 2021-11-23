#include <stdio.h>
#define MAX_LENGTH 50 
int main(){
    char a[MAX_LENGTH], *p = a;
    int truth = 1;
    printf("Enter a message: ");
    while((*p = getchar()) != '\n'){
        if((*p < 'A' || (*p > 'Z' && *p < 'a') || *p > 'z'))
            continue;
        if(*p >= 'A' && *p <= 'Z')
            *p = *p - 'A' + 'a';
        p++;
    }
    char *q = --p;
    while(p >= a){
        printf("%c", *p--);
    }
    printf("\n");
    p = q;
    int j = 0; 
    while(j <= p - a){
        printf("%c", a[j++]);
    }
    printf("\n");
    int k = 0;
    char ch;
    while(k <= p - a){
        ch = *(p--);
        if(a[k] != ch){
            printf("Not a palindrome\n");
            truth = 0;
            break;
        }
        k++;
    }
    if (truth == 1){
        printf("Palindrome\n");
    }
}
