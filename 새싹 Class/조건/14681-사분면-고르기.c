#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x, y;
    bool f_positiveX = false;
    bool f_positiveY = false;

    scanf("%d", &x);
    scanf("%d", &y);
    
    x > 0 ? f_positiveX = 1 : f_positiveX;
    y > 0 ? f_positiveY = 1 : f_positiveY;

    if (f_positiveX)
    {
        if (f_positiveY) printf("1\n");
        else printf("4\n");
    }
    else
    {
        if (f_positiveY) printf("2\n");
        else printf("3\n");
    }
    
    return 0;
}