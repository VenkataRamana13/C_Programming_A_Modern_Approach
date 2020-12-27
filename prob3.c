#include <stdio.h>
int main()
//doubt: we didnt get the awnser when we put formula of v before scanf!

{
    int r; float v;
    

    printf("What is the radius of the sphere?: ");
    scanf("%d",&r);
    v = (4/3.0) * 3.14 * r * r * r;
    printf("The volume of the sphere is:%f\n", v);

    return 0;
}
