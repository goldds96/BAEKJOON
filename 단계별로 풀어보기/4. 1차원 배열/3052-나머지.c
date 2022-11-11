#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int input[10] = {0};
    int remainder[10] = {0};
    int cnt = 0;

    for (int i=0; i<10; i++)
    {
      scanf("%d", &input[i]);
      remainder[i] = input[i] % 42;

      if (i > 0)
      {
        bool flag = false;
        for (int j=0; j<i; j++)
          if (remainder[i] == remainder[j]) flag = true;

        if (!flag) cnt++;
      }
    }

    printf("%d", cnt+1);

    return 0;
}
