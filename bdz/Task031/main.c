#include <stdio.h>
#include <math.h>

double my_function(int x)
{
 return (double)(x*x + 5*x + 6)/(1 + x + x*x);
}

int main(void)
{
  int x;
  scanf("%d", &x);
  printf("%.6f\n", my_function(x));
  return 0;
}
