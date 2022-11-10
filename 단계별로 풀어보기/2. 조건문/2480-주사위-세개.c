#include <stdio.h>

int main(void)
{
    int num1, num2, num3, max;
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 == num2) && (num2 == num3))
      printf("%d", 10000 + num1 * 1000);

    else if ((num1 == num2) || (num1 == num3))
      printf("%d", 1000 + num1 * 100);
    
    else if (num2 == num3)
      printf("%d", 1000 + num2 * 100);

    else
    {
      num1 > num2 ? (max = num1) : (max = num2);
      max > num3 ? (max = max) : (max = num3);
      printf("%d", 100 * max);
    }
    return 0;
}
