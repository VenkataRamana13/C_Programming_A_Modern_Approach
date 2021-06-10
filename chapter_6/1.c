#include <stdio.h>  
int main(){
    float largest = 0.0f;
    float current;
    do 
    {
        printf("Enter a number: ");
        scanf ("%f", &current);
        if (current > largest){
            largest = current;
        }
    }while (current > 0);
    printf ("The largest number entered was: %f\n", largest);
    return 0;
}