#include <stdio.h>
#define MAX_LENGTH 50
int main(){
    printf("Enter a message: ");
    char a[MAX_LENGTH], *p = a; 
    while((*p++ = getchar()) != '\n'){
        ;}
    printf("Reversal is: ");
    while(p >= a){
        printf("%c", *p--);
    }
    printf("\n");
}
