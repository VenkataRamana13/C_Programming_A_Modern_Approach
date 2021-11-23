#include <stdio.h>
int check(int x, int y, int n)
{
    if(x >= 0 && x <= n && y >= 0 && y<= n)
        return 1;
    else 
        return 0;
}
int main(){
    int x; int y; int n;
    printf("Eneter the values of x, y and n: ");
    scanf("%d, %d, %d", &x, &y, &n);
    printf("Answer: %d\n",check(x, y, n));
    return 0;
}


