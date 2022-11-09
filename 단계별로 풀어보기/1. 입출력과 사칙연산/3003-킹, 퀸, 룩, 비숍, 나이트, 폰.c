#include <stdio.h>

int main(void)
{
    int table[6] = {1, 1, 2, 2, 2, 8};
    int input[6] = {0};

    for (int i=0; i<6; i++)
      scanf("%d", &input[i]);

    for (int j=0; j<sizeof(input) / sizeof(int); j++)
    { 
      printf("%d ", table[j] - input[j]);
    }

    return 0;
}
