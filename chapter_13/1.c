#include <stdio.h>
#include<string.h>

#define MAX_LENGTH 20

int main(){
    char word[MAX_LENGTH+1], smallest_word[MAX_LENGTH+1] , largest_word[MAX_LENGTH+1];
    printf("Enter word: ");
    gets(word);
    strcpy(smallest_word, strcpy(largest_word, word));
    for(;;){
        printf("Enter word: ");
        gets(word);
        if(strcmp(word, smallest_word) < 0)
            strcpy(smallest_word, word);
        if(strcmp(word, largest_word) > 0)
            strcpy(largest_word, word); 
        if(strlen(word) == 4){
            printf("\nSmallest word: %s\n", smallest_word);
            printf("Largest word: %s\n", largest_word);
            break;}
    }
}
