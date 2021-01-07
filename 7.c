//To print the max of given four numbers.
#include <stdio.h>
int main()

{
    int i1, i2, i3, i4, min1, max1, min2, max2, min, max;

    printf("Enter four numbers: ");
    scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

    if (i1 > i2)
        {max1 = i1; min1 = i2;}
    else
        {min1 = i1; max1 = i2;}

    if (i3 > i4)
        {max2 = i3; min2 = i4;}
    else 
        {min2 = i3; max2 = i4;}

    if (min1 < min2)
        {min = min1;}
    else 
        {min = min2;}

    if (max1 > max2)
        {max = max1;}
    else 
        {max = max2;}

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;                            
}