//European Article Number Universal Product code

#include <stdio.h>

int main()

{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, f, s, total, check_digit;

    f = i2 + i4 + i6 + i8 + i10 + i12;
    s = i1 + i3 + i5 + i7 + i9 + i11;

    total = f * 3 + s;
    check_digit = 9 - ((total - 1) % 10);

    printf("Enter the first 12-digits of EAN : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);
    printf("Check digit: %d\n", check_digit);

    return 0;
    


}