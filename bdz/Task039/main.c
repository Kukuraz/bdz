#include <stdio.h>

int array_sum(int arr[], int n)
{
  int summ = 0;
  
  
  for(int i = 0; i < n; i++){ 
    if( arr[i] % 2 == 0){
      summ += arr[i];
    }
  }
  return summ;
}

int main(void)
{
 int n;
 arr[100];
  scanf("%d", &n);
  for(int i = 0; i<n ; i++){
    scanf("%d", &arr[i]);
  }
printf("%d", array_sum(arr, n ));
  return 0;
}
































// int sum = 0; 
//  for (int i; i < n ; i++){
//   if (arr[i] % 2 == 0) {
//     sum += arr[i];
//   }
// }
//   return sum;




//    int n;
//   scanf("%d", &n);
  
//   int arr[n];
//   for (int i; i < n ; i++){
//     scanf("%d", &arr[i]);
//   }



//   printf("%d\n", array_sum(arr, n));
