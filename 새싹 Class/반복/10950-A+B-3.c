#include <stdio.h>

int main(void)
{
    int iter, a, b;
    scanf("%d", &iter);
    
    for(int i=0; i<iter; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}