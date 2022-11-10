#include <stdio.h>

int main(void)
{
    int count, num1, num2;
    scanf("%d", &count);

    for (int i=1; i<count+1; i++)
    {
      scanf("%d %d", &num1, &num2);
      printf("Case #%d: %d\n", i, num1 + num2);
    }

    return 0;
}
