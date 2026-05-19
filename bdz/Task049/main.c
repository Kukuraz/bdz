
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sluch(float *mas1, int size){
   
    for (int i = 0 ; i <= size ; i++){
       mas1[i] =  (float)rand()/RAND_MAX* 10.0f;  //RAND_MAX - макрос
       printf("%.2f\t\n", mas1[i]);
    }
}

void max_elem(float *mas1, float max, float min){
    
     
    for (int i = 1; i <= 5; i++){
        if (max < mas1[i]){
          max = mas1[i];  
        }
        if (min > mas1[i]){
            min = mas1[i];
        }
        
    }    
    printf("максимум: %f  минимум: %f\n" , max, min);
}

int main(){
    srand((unsigned)time(NULL));  //для разных рандом значений  
    int size = 5; 
    //   scanf("%d", size);
      float mas1[size];
    
      sluch(mas1, size);
       float min = mas1[0];
        float max = mas1[0];
      max_elem(mas1, max, min);
    


    

    return 0;
}
