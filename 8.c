#include <stdio.h>

int main() 
{

    int user_time, hour, minute, i1 = 480, i2 = 583, i3 = 679, i4 = 767, 
        i5 = 840, i6 = 945, i7 = 1140, i8 = 1305;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    user_time = hour * 60 + minute;

    printf("Closest departure time is ");

    if (user_time <= i1 + (i2 - i1) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");

    else if (user_time < i2 + (i3 - i2) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");

    else if (user_time < i3 + (i4 - i3) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");

    else if (user_time < i4 + (i5 - i4) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");

    else if (user_time < i5 + (i6 - i5) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");

    else if (user_time < i6 + (i7 - i6) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");

    else if (user_time < i7 + (i8 - i7) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");

    else
        printf("9:45 p.m., arriving at 11:58 p.m.\n");


    return 0;
}
