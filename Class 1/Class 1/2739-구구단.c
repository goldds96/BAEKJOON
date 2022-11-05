#include <stdio.h>

int main(void)
{
    int iter;
    scanf("%d", &iter);

    for (int i=1; i<=9; i++)
        printf("%d * %d = %d\n", iter, i, iter*i);

    return 0;
}