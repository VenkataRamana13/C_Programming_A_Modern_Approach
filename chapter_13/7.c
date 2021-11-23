/*#include <stdio.h>
int main(){
    int num, tens, ones; tens = num / 10; ones = num % 10;
    printf ("Enter a two-digit number: ");
    scanf("%d", &num);
    if (num < 10 || num > 99){
        printf("Learn numbers, asshole!\n");
    }
    else {
        printf ("You entered the number ");

        if (num > 10 && num < 20){
        switch(num){
            case 11 :
            printf ("eleven\n"); break;
            case 12 :
            printf ("twelve\n"); break;
            case 13 :
            printf("thirteen\n"); break;
            case 14:
            printf("fourteen\n"); break;
            case 15:
            printf("fifteen\n"); break;
            case 16:
            printf("sixteen\n"); break;
            case 17:
            printf("seventeen\n"); break;
            case 18:
            printf("eighteen\n"); break;
            case 19:
            printf("nineteen\n"); break;
            default: break;
        }
        }
        else {
        switch (num/10) {
            case 2:
            printf("twenty"); break;
            case 3:
            printf("thirty"); break;
            case 4:
            printf("forty"); break;
            case 5:
            printf ("fifty"); break;
            case 6:
            printf("sixty"); break;
            case 7:
            printf("seventy"); break;
            case 8:
            printf("eighty"); break;
            case 9:
            printf("ninety"); break;
            default: break;
        }

        }

    }
    if ((num/10) != 1){
        switch (num%10){
            case 1:
            printf(" one\n"); break;
            case 2:
            printf(" two\n"); break;
            case 3:
            printf(" three\n"); break;
            case 4:
            printf(" four\n"); break;
            case 5:
            printf(" five\n"); break;
            case 6:
            printf(" six\n"); break;
            case 7:
            printf(" seven\n"); break;
            case 8:
            printf(" eight\n"); break;
            case 9:
            printf(" nine\n"); break;
            default: break;
        }
    }
}*/

#include <stdio.h>
int main(){
    printf("Enter a two - digit number: ");
    int num; scanf("%d" , &num);
    int ones, tens;
    char *words_tens[] = {"twenty" , "thirty", "forty", "fifty" , "sixty", "seventy" , "eighty", "ninety"}, 
    *words_ones[] = {"one" , "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *weird[] = {"ten", "eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    if (num >= 10 && num < 20){
        printf("%s\n", weird[num - 10]);
    }
    else{
        tens = num / 10; ones = num % 10;
        printf("%s ", words_tens[tens - 2]);
        if (ones == 0)
            printf("\n");
        else
            printf("%s\n", words_ones[ones - 1]); 
    }}
