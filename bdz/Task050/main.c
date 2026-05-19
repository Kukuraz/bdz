#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sluch(float **arr, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
        arr[i][j] = (float)rand()/RAND_MAX * 100.0;
        printf("%f\t", arr[i][j]);
    }
    printf("\n");
     
}
}
void max_elem(float **arr, int size){
    float max = arr[0][0];

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
        if(max < arr[i][j]){
            max = arr[i][j];
        }
        }
      }
      printf("Максимальный элемент: %f\n", max);
    }



int main(){
    srand((unsigned)time(NULL));
    int size;
    scanf("%d", &size);
    

float **arr = (float **)malloc(size * sizeof(float *));
 for (int i = 0; i < size; i++) {
        arr[i] = (float *)malloc(size * sizeof(float));
    }

    sluch(arr, size);
    max_elem(arr, size);


    free(arr);
    return 0;
}