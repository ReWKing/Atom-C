/*  将二数(a, b)中的大数存放在a中   */
#include <stdio.h>
void main()
{
  int a, b, t;
  scanf("%d%d", &a, &b);
  if(a < b)
    {t = a, a = b, b = t;}
  printf("a = %d, b = %d\n", a, b);
}
