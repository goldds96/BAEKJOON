#include <stdio.h>

int main(void)
{
    int count, input;
    int max = -1000001;
    int min = 1000001;
    scanf("%d", &count);

    for (int i=0; i<count; i++)
    {
      scanf("%d", &input);

      if (input > max)
        max = input;
      if (input < min)
        min = input;
    }

    printf("%d %d", min, max);

    return 0;
}
