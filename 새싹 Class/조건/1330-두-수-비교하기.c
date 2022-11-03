#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == b) printf("==\n");
    else a > b ? printf(">") : printf("<");
    
    return 0;
}