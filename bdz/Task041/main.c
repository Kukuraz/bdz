#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  if(n ==0){
    printf("0 0");
   else{
  int arr[100];
  for (int i = 0; i < n; i++){
    scanf("%d", &arr[]);
  }
  int max = arr[0];
  int min = arr[0];

   for (int i = 0; i < n; i++){
    if(max < arr[i]){
      max = arr[i]
    }
    if(min > arr[i]){
    min = arr[i];
   }
  }
}
  }
    printf("минимальное: %d максимальное: %d\n", min, max);
  return 0;
}


















































// #include <stdio.h>

// int main(void)
// {
//   int n;
//   scanf("%d", &n);
  
//  if(n == 0){
//  printf("0 0\n");
//   }
//   else{
//   int arr[n];
// scanf("%d", &arr[0]);
// int min = arr[0];
// int max = arr[0];
//   for (int i = 1; i < n; i++){
    
//     scanf("%d", &arr[i]);
    
    
//     if(max < arr[i]){
//       max = arr[i];
//       //printf("%d  %d", i, arr[i]);
//     }
//     if(min > arr[i]){
//       min = arr[i];
//     }
    
//   }  
//   printf("минимальное: %d максимальное: %d\n", min, max);
//  }

//   return 0;
// }


