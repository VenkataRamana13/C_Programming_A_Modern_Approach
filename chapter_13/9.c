/*#include <stdio.h>
#include <ctype.h>

int main(){
    printf("Enter a sentence: ");
    char ch; int i = 0;
    while((ch = toupper(getchar())) != '\n'){
        if (ch == 'A' || ch == 'I' || ch == 'E' || ch == 'O' || ch == 'U'){
            i++;
        }
    }
    printf("Your sentence contains %d vowels\n", i);
}*/
#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);
int main(){
    printf("Enter a sentence: ");
    char *sentence;
    gets(sentence);
    printf("Your sentence contains %d vowels\n", compute_vowel_count(sentence));
}
int compute_vowel_count(const char *sentence){
    char *p = sentence, q; int i = 0;
    for(; *p != '\0'; p++){
        q = toupper(*p);
        if (q == 'A' || q == 'E' || q == 'I' || q == 'O' || q == 'U')
            i ++;
        }
    return i;}

