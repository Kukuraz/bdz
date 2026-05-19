#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  
  int ar[n];
  
  for (int i= 0; i < n; i++){
    scanf("%d", &ar[i]);
    
  }
  
  int perfix[n];
  perfix[0] = ar[0];
  
  printf("%d\t", ar[0]);

  for(int i = 1; i < n; i++){
    
    printf("%d\t", perfix[i] = perfix[i-1] + ar[i]);
    
    
  }




  return 0;
}
