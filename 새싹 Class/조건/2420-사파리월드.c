#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    long int a, b;
    scanf("%ld %ld", &a, &b);

    printf("%ld", labs(a-b));
    
    return 0;
}