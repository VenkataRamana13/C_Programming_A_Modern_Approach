#include <stdio.h>
main()

{
    int x1, x2, x3, y1, y2, y3, a, b;
    printf("Enter first date:(dd/mm/yy) ");
    scanf("%d/%d/%d", &x1, &x2, &x3);

    printf("Enter second date:(dd/mm/yy) ");
    scanf("%d/%d/%d", &y1, &y2, &y3);

    if (x3 > y3)
        a > b;
    else if (y3 > x3)
        b > a;
    else if (x2 > y2)
        a > b;
    else if (y2 > x2)    
        b > a;
    else if (x1 > y1)
        a > b;
    else 
        b > a;

    if (b > a)
        printf("%d/%d/%d is earlier than %d/%d/%.2d\n", y1, y2, y3, x1, x2, x3);
    else if (a > b)
        printf("%d/%d/%d is earlier than %d/%d/%.2d\n", x1, x2, x3, y1, y2, y3);

    return 0;                    

}