#include <stdio.h>

int main(void)
{
    int array[9] = {0};
    int max = 0;
    int index = 0;

    for (int i=0; i<9; i++)
    {
      scanf("%d", &array[i]);

      if (array[i] > max)
        {
          index = i+1;
          max = array[i];
        }
    }

    printf("%d\n", max);
    printf("%d\n", index);

    return 0;
}
