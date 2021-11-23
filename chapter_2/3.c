#include <stdio.h>
int main()
{
    int radius;
    
    printf("Enter the value of the radius: ");
    scanf("%d", &radius);
    float volume = 4.0f/3.0f * 3.14f * radius * radius * radius;
    printf("The volume of the the sphere is: %0.3f\n", volume);
}