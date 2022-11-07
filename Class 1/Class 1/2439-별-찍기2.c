#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    for (int i=0; i<input; i++)
    {
        for (int j=input-1; j>i; j--)
            printf(" ");
        for (int k=0; k<i+1; k++)
            printf("*");
        printf("\n");
    }

    return 0;
}
