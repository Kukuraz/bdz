#include <stdio.h>
#include <string.h>

char *strcat(char *dest, const char *src);

int main(){
    


    char greeting[] ;
    char name[] ;
    scanf("%s  %s", greeting, name);
    strcat(greeting, " "); 
    strcat(greeting, name);

    printf("%s\n", greeting);



    return 0;
}

//Подумать над заданием 2