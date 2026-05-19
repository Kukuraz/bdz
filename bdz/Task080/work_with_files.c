#include <stdio.h>

int main(void)
{
    FILE* fp;
    char sym[10];
    fp = fopen("data.txt", "w");
    // fopen(&fp, "data.txt", "w");
    fprintf(fp, "%s", "Hello world!");
    fclose(fp);

    fp = fopen("data.txt", "r");
    while ((fgets(sym, 10, fp)) != NULL)
    {
        printf("%s\n", sym);
    }
    fclose(fp);

return 0;
}
