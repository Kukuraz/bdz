#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int arr[100];
for(int i =0; i < n; i++){
scanf("%d", &arr[i]);
}
  for(int i =0; i < n; i++){
    
    for(int j = i + 1; j < n; j++){
      if(arr[i] == arr[j]){
        printf("%d", arr[i]);
        return 0;
      }
      }
    }
  
    printf("No duplicates");
  return 0;
  }





























































// #include <stdio.h>
// #include <stdbool.h>

// int main(void)
// {
//   int n;
//   scanf("%d", &n);
// bool estpovtor = false;
// int  arr[n]; 
// int powtor = 0;
//  for (int i; i < n ; i++){
//   scanf("%d", &arr[i]);
//   for ( int b = 0; b < i; b++ ) {
//   if (arr[i] == arr[b]){
//     estpovtor = true;
//     powtor = arr[i];
//   }
   
//   }
//  }

// if (estpovtor){
//   printf("Duplicate: %d\n", powtor);
//   }
// else{
//     printf("No duplicates\n");
//   }





//  //printf("%d", arr);

//   return 0;
// }
