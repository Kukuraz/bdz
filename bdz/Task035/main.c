#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

 {
    int sum = 0;

    if (argc == 1)
    {
        printf("No numbers provided\n");
        return 0;
    }

    for (int i = 1; i < argc; i++)
        sum += atoi(argv[i]); //atoi переводит строку в число
  printf("%d\n", sum);
  return 0;
}
