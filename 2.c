#include <stdio.h>
int main()

{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);

    if (hour <= 11)
        printf("The equivalent 12-hour time: %d: %d AM\n", hour == 0 ? 12 : hour, minute);
    else
        printf("The equivalent 12-hour time: %d: %d PM\n", hour == 12 ? 12 : hour - 12, minute);
    
    return 0;
}