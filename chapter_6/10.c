#include <stdio.h>
int main()
{
    int a1 = 100, a2 = 100, a3 = 100, b1, b2, b3;
    while (b1 != 0, b2 != 0, b3 != 0){
    printf ("Enter a date(dd/mm/yy): ");
    scanf ("%d/%d/%d", &b1, &b2, &b3);
    if (b1 == 0 || b2 == 0 || b3 == 0)
    {
        break;
    }
    if (b3 < a3 || (b3 == a3 && b2 < a2) || (b3 == a3 && b2 == a2 && b1 < a1) )
    {
        a1 = b1; a2 = b2; a3 = b3;
    }}
    ;
    printf ("%d/%d/%d is the earliest date\n", a1, a2, a3);
}