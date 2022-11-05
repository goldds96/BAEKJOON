#include <stdio.h>

int main(void)
{
    int len = 0;
    char array[100];
    scanf("%s", array);

    len = strlen(array);
    printf("%d\n", len);

    return 0;
}