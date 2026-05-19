
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sluch(float *mas1, int size){
    
    for( int i = 0 ; i < size; i++){
        mas1[i] = (float)rand()/RAND_MAX * 100.0;
        printf("%f\t",    mas1[i]);
    }

   
}

void max_elem(float *mas1, float max,  float min, int size){
   for (int i = 0; i < size; i++){
    if(max < mas1[i]){
        max = mas1[i];
    }
    for (int i = 0; i < size; i++){
    if(min > mas1[i]){
        min = mas1[i];
    }
     
   }
   }
    printf("максимум: %f  минимум: %f\n" , max, min);

   
}
int main(){
   int size;
   int max = 0;
   int min;

   scanf("%d", &size);
   srand((unsigned int)time(NULL));
  float *mas1 = malloc(size * sizeof(float));
  sluch(mas1, size);
  max_elem(mas1, max, min, size);

    free(arr);
    return 0;
}
