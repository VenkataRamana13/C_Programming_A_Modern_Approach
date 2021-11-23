#include <stdio.h>
int main(){
    int hours, mins;
    printf("Enter a 24-hour time format: ");
    scanf("%d:%d", &hours, &mins);
    if (hours == 0){
    printf ("Equivalent 12 hour time format is 12:%d AM\n", mins);}
    else if (hours < 12)
    {
        printf ("Equivalent 12 hour time is %d:%d AM\n", hours, mins);
    }
    else if (hours == 12) {
        printf ("Equivalent 12 hour time is %d:%d PM\n", hours, mins);
    }
    else {
        printf ("Equivalent 12 hour time is %d:%d PM\n", hours - 12, mins);
    }
}