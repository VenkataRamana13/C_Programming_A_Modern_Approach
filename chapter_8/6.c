//B1FF filter
#include <stdio.h>
#include <ctype.h>
#define max_size 100
int main(){
    char c, message[max_size]={0};
    int i = 0;
    printf("Enter message: ");
    while ((c = getchar()) != '\n' && i < max_size){
        message[i++] = c;
    }
    printf("In B1FF-speak: ");
    for (i = 0; i < max_size; i++)
    {
        c = toupper(message[i]);

        switch(c){
            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default: 
                printf("%c", c);
                break;
        }
    }
    printf("!!!!!!!!!!\n");
}