#include <stdio.h>
#include <string.h>
//char *strstr(const char *str, const char *substr);
int main()
{
    char text[50];
    fgets(text, sizeof(text), stdin);
    // char text[] = "Hello world!";
    char *pos = strstr(text, "world");

    if (pos != NULL)
        printf("Found at index: %ld\n", pos - text);
    else
        printf("Substring not found\n");

    return 0;
}