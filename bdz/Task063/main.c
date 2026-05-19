#include <stdio.h>
#include <string.h>
int strcmp(const char *str1, const char *str2);




int main()
{
    char str1[50] ;
    char str2[50] ;
    scanf("%s %s", str1, str2 );
  
    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("str1 is less than str2\n");
    else
        printf("str1 is greater than str2\n");

    return 0;
}