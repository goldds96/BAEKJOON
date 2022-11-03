#include <stdio.h>

int main(void)
{   
    // scanf와 printf는 충분히 빠르다!
    int iter, a, b;
    scanf("%d\n", &iter);
    
    for(int i=0; i<iter; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}