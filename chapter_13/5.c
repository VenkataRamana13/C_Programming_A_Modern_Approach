#include <stdio.h>

int main(int argc, char *argv[]){
    int sum = 0;
    for(int i = 0; i < argc; i++){
        sum += atoi(argv[i]);
    }
    printf("Total: %d\n", sum);
}
