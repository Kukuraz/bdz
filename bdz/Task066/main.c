#include <stdio.h>
#include <string.h>
 
int main ()
{       
    char myStr[50];
   
    fgets(myStr, sizeof(myStr), stdin);
    // char myStr[50] = "Hello my dear friend!";
    char * myPtr = strtok(myStr, " ");
    while(myPtr != NULL) {
        printf("%s\n", myPtr);
        myPtr = strtok(NULL, " ");
    }
}