#include <stdio.h>
void main()
{
  int f1, f2, i;
  f1 = 1; f2 = 1;
  for (i = 1; i <= 20; i++)
  {
    f1 = f1 + f2;
    f2 = f2 + f1;
    printf("%d%d\n", f1, f2);
  }
  printf("\n");
}
\[
e ^ ()
\]
