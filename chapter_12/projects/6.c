//contains errors...should be corrected and verified
/* qsort.c (Chapter 9, page 207) */
/* Sorts an array of integers using Quicksort algorithm */

#include <stdio.h>

#define N 10

void quicksort(int , int *, int *);
int split(int a[], int low, int high);

int main(void)
{
  int a[N], *p = a; 

  printf("Enter %d numbers to be sorted: ", N);
  while((*p++ = getchar()) != '\n')
      ;
  p = a;
  quicksort(a, p, p + N - 1);

  printf("In sorted order: ");
  for (p = a; p < a + N; p++)
    printf("%d ", *p);
  printf("\n");

  return 0;
}

void quicksort(int a[], int *low, int *high)
{
  int *middle;

  if (*low >= *high) return;
  *middle = split(a, low, high);
  quicksort(a, low, middle - 1);
  quicksort(a, middle + 1, high);
}

int split(int a[], int *low, int *high)
{
  int part_element = *low;

  for (;;) {
    while (low < high && part_element <= *high)
      high--;
    if (low >= high) break;
    *low++ = *high;

    while (low < high && *low <= part_element)
      low++;
    if (low >= high) break;
    *high-- = *low;
  }

  *high = part_element;
  return high;
}
