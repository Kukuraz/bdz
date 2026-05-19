#include <stdio.h>

double factorial(int n)
{
  if (n < 0) {
        return -1;
    }
      long  long fact = 1;
      for (int i = 1; i <= n; i++) {
        fact *= i; 
        }
        return fact;
       
    

}

int main(void)
{
  int n;
  scanf("%d", &n);
  double result = factorial(n);
  printf("%.0f\n", result);
  return 0;
}




