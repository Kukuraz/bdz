#include <stdio.h>
#include <stdlib.h>

int atoi(const char *str);


int main(){

    char str_baza[] = "100";
    int  baza = atoi(str_baza);
    int years;
    scanf("%d", &years );

    if (years < 0){
        printf("Данные не корректны\n");   
    }
    else if(years < 6 ){
        printf("Проход бессплатный\n");
    }
    else if( years <= 18){
        printf("%d\n", baza/2);
    }
    else  {
        printf ("%d\n", baza);
    } 

    return 0;
}