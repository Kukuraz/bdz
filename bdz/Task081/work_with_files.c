#include <stdio.h>

int main(void)
{
    FILE* fp;
    char message[] = "Hello world!";
    // находим длину записываемой строки
    int n = sizeof(message) / sizeof(message[0]);
    // символ для считывания
    char c;

    // запись через putc
    fp = fopen("data.txt", "w");
    for (int i = 0; i < n; i++)
    {
        putc(message[i], fp);
    }
    fclose(fp);
    printf("File has been written\n");

    // чтение через getc
    fp = fopen("data.txt", "r");
    while ((c = getc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);

    return 0;
}