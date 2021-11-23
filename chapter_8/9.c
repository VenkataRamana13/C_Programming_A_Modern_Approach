/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define num_directions 4
int main(){
    int next=1;
    char board[10][10]; int i, j; char ch; int direction;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            board[i][j] = '.';
        }
    }
    srand((unsigned) time(NULL));
    board[0][0] = 'A'; i = 0; j = 0;
    
    //for (ch = 'A'; ch < 'Z', next=1; ch++){
    ch ='A';
    do 
    {        
        // Get the direction for next step

        // Case where all directions are blocked.
        if (board[i + 1][j] !='.' && board[i-1][j] !='.' && board[i][j+1] !='.' && board[i][j-1] != '.'){
            break;
        }
        loop:    
        direction = rand() % num_directions;
        if (direction == 0){
            if (i == 0){
                goto loop;
            }
            i = i - 1; 
        }
        else if (direction == 1){
            if (j == 9){
                goto loop;
            }
            j = j + 1; 
        }
        else if (direction == 2){
            if (i == 9){goto loop;}
            i = i + 1;
        }
        else if (direction == 3){
            if (j == 0){goto loop;}
            j = j - 1; 
        }

        // Set new co-ordinates or position.
        board[i][j] = ch + 1;
        ///printf("%c", board[i][j]);
        // Go to next alphabet
        ch++;
    } 
    while( ch < 'Z');

    for (i = 0; i<10; i++){
        for (j = 0; j < 10; j++){
            printf ("%c\t", board[i][j]);
        }
        printf("\n");
    }
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define num_directions 4
int main(){
    char ch = 'A'; int i = 0, j = 0, up = 0, down = 0, left = 0, right = 0, direction = 0;
    char board[10][10] = {0};
    srand((unsigned) time(NULL));
    board[i][j] = ch++;
    while (ch <= 'Z'){
        up = down = left = right = direction = 0;

        if (i > 0 && board[i - 1][j] == 0){
            up = 1;
        }
        if (i < 9 && board[i + 1][j] == 0){
            down = 1;
        }
        if (j > 0 && board[i][j - 1] == 0){
            left = 1;
        }
        if (j < 9 && board[i][j + 1] == 0){
            right = 1;
        }

        if (up + down + left + right == 0){
            break;
        }
        direction = rand() % 4;
        switch(direction){
            case 0:
            if (up){
                board[--i][j] = ch++;
                break;
            }
            case 1:
            if (down){
                board[++i][j] = ch++;
                break;
            }
            case 2:
            if (left){
                board[i][--j] = ch++;
                break;
            }
            case 3:
            if (right){
                board[i][++j] = ch++;
                break;
            }
            default:
            break;
        }

    }
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (board[i][j] == 0){
                board[i][j] = '.';
            }
            printf ("%c\t", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
