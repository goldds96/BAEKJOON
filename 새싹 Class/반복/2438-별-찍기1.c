#include <stdio.h>

int main(void)
{
    int iter;
    scanf("%d", &iter);

    for (int i=1; i<=iter; i++)
    {
        for (int j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}