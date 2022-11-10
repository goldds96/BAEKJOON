#include <stdio.h>

int main(void)
{
    int num, result = 0;
    scanf("%d", &num);

    for (int i=1; i<num+1; i++)
      result += i;
    
    printf("%d", result);

    return 0;
}
