//doubt: how to leave punctuation marks unchanged?
//it has errors review later

#include <stdio.h>
int main(){
    int i; char ch = 'A';
    printf("Enter phone number: ");
    do {
        if (1 <= getchar() && getchar() <= 9){
            i = getchar();
            printf("%d", i);
        }
        else if (ch <= getchar()  && getchar() <= ch + 2){
            i = 2;
            printf("%d", i);}
        else if (ch + 3 <= getchar() && getchar() <= ch + 5)
        {
            i = 3;
            printf ("%d", i);
        }
        else if (ch + 6 <= getchar() && getchar() <= ch + 8){
            i = 4;
            printf ("%d", i);
        }
        else if (ch + 9 <= getchar() && getchar() <= ch + 11){
            i = 5;
            printf ("%d", i);
        }
        else if (ch + 12 <= getchar() && getchar() <= ch + 14){
            i = 6;
            printf ("%d", i);
        }
        else if (ch + 15 <= getchar() && getchar() <= ch + 17){
            i = 7;
            printf("%d", i);
        }
        else if (ch + 18 <= getchar() && getchar() <= ch + 20){
            i = 8;
            printf("%d", i);
        }
        else if (ch + 20 <= getchar() && getchar() <= ch + 22){
            i = 9;
            printf ("%d", i);
        }
        else if (getchar() == '-')
        {
            printf("-");
        }
        
    }while (getchar() != '\n');
}