#include <stdio.h>

int main(void)
{
    int input, value;
    int count = 0;
    scanf("%d", &input);
    value = input;

    do {
      if (value < 10)
      {
        value = value * 10 + value;
        count++;
      }
      else
      {
        value = (value % 10 ) * 10 + (((value / 10) + (value % 10)) % 10);
        count++;    
      }
    } while (input != value);

    printf("%d", count);

    return 0;
}
