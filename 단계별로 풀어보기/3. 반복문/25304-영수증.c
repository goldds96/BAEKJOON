#include <stdio.h>

int main(void)
{
    int total, input, price, count, value = 0;
    scanf("%d %d", &total, &input);

    for (int i=0; i<input; i++)
    {
      scanf("%d %d", &price, &count);
      value += price * count;
    } 

    if (value == total) printf("Yes\n");
    else printf("No\n");

    return 0;
}
