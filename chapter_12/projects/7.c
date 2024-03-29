/* maxmin.c (Chapter 11, page 250) */
/* Finds the largest and smallest elements in an array */

/*#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
  int b[N], i, big, small;

  printf("Enter %d numbers: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &b[i]);

  max_min(b, N, &big, &small);

  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);

  return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
  int i;

  *max = *min = a[0];
  for (i = 1; i < n; i++) {
    if (a[i] > *max)
      *max = a[i];
    else if (a[i] < *min)
      *min = a[i];
  }
}*/
#include <stdio.h>
#define N 10
void max_min(int , int, int *, int *);
int main(){
    int a[N], *p = a, big, small;
    printf("Enter %d numbers: ", N);
    while((*p++ = getchar()) != '\n')
        ;
    max_min(a, N, &big, &small);
    printf("Largest : %d\n", big);
    printf("Smallest: %d\n", small);
}
void max_min(int a[], int n, int *max, int *min){
    max = min = a;
    int *p;
    for(p = a; p < n, p++){
        if(*p > *max)
            *max = *p;
        else if(*p < *min)
            *min = *p;
    }
}

