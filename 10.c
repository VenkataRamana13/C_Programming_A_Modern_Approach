#include <stdio.h>
int main()

{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    b = a / 10;

    switch (b)
    {
        case 0: case 1: case 2: case 3: case 4: case 5: 
        printf("Letter grade: F\n"); break;
        case 6: printf("Letter grade : D\n"); break;
        case 7: printf("Letter grade : C\n"); break;
        case 8: printf("Letter grade : B\n"); break;
        case 9: printf("Letter grade : A\n"); break;
    }

    return 0;
}