#include <stdio.h>
void main()
{
  int i, sum=0;
  for (i = 1; i <= 100; i++)
  sum = sum + i;
  printf("sum = %d, i = %d\n", sum, i);
}
