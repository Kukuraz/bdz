#include<stdio.h>


void swap(int *a, int *b){
    
    int g = *a;
    *a = *b;
    *b = g; 
}


int main(){
    int a = 5;
    int b = 4;
    swap( &a,  &b);
    printf("%d %d", a, b);

}













































// #include<stdio.h>

// void swap(int  *a, int *b){

//     int g = *a;

//     *a = *b;
//     *b = g;

// }

// int main()
// {
//     int p = 1;
//     int q = 2;
//     swap(&p, &q);
//     printf("%d %d\n", p, q);
//     return 0;
// }

