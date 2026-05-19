#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sluch(float *mas,float *mas2, int size, int size2){
     
    for(int i = 0; i < size; i++ ){
       mas[i] = (float)rand()/ RAND_MAX* 10.0f;
       printf("%.2f\t", mas[i]);  
     
    }
    printf("\n"); 
    for(int j = 0; j < size2; j++ ){
       mas2[j] = (float)rand()/ RAND_MAX* 100.0f;
       printf("%.2f\t", mas2[j]);  

    }
  printf("\n");  
}

void max_elem(float *mas, float *mas2 ,int size, int size2 ){
     
    
    float max1 = mas[0];
    float max2 = mas2[0];   
    for(int i = 1; i <= size; i++ ){   
        if( max1 < mas[i]){
        max1 = mas[i];
       }
      
      for(int b = 1; b <= size2; b++ ){
       if( max2 < mas2[b]){
        max2 = mas2[b];
       }  
       
       }
  
  
    }
  if(max1 > max2){
        printf("Максимальное значенеи %.2f\n", max1);}
        else {
            printf ("Максимальное значенеи %.2f\n", max2);
        }   
    }


int main(){
    srand((unsigned)time(NULL));
    int size;
     int size2;
    scanf("%d  %d", &size, &size2 );
    float mas[size];
    float mas2[size2];
    // float max1 = mas[0];
    // float max2 = mas2[0];

    sluch(mas,mas2, size, size2);
    max_elem(mas, mas2 , size, size2);
    return 0;
}