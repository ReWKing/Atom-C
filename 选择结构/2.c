#include <math.h>
#include <stdio.h>
void main()
{
  float a, b,c, s, area;
  scanf("%f%f%f", &a, &b, &c);
  if ((a + b > c) && (a + c > b) && (b + c > a))
  {
    s = 1.0/2 * (a + b + c);
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("a = %f, b =  %f, c = %f, s = %f\n", a, b, c, s );
    printf("area = %f\n", area );
  }
  else
  {
    printf("Wrong input!");
  }
}
