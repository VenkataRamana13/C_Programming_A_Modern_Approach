#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define num_directions 4 

void generate_random_walk(char walk[10][10]){

char ch = 'A'; int i = 0, j = 0, up = 0, down = 0, left = 0, right = 0, direction = 0;
    walk[i][j] = ch++;
    while (ch <= 'Z'){
        up = down = left = right = direction = 0;
        
        if (i > 0 && walk[i - 1][j] == 0){
            up = 1;
        }
        if (i < 9 && walk[i + 1][j] == 0){
            down = 1;
        }
        if (j > 0 && walk[i][j - 1] == 0){
            left = 1;
        }
        if (j < 9 && walk[i][j + 1] == 0){
            right = 1;
        }

        if (up + down + left + right == 0){
            break;
        }
    
        direction = rand() % 4;
        switch(direction){
            case 0:
            if (up){
                walk[--i][j] = ch++;
                break;
            }
            case 1: 
            if (down){
                walk[++i][j] = ch++;
                break;
            }
            case 2: 
            if (left){
                walk[i][--j] = ch++;
                break;
            }
            case 3: 
            if (right){
                walk[i][++j] = ch++;
                break;
            }
            default:
            break;
        }
    }   
}

void print_array(char walk[10][10]){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (walk[i][j] == 0){
                walk[i][j] = '.';
            }
            printf ("%c\t", walk[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    char walk[10][10] = {0};
    srand((unsigned) time(NULL));
    generate_random_walk(walk);
    print_array(walk);
    return 0;
}



