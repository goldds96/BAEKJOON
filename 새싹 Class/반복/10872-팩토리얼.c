#include <stdio.h>

int fact(int number);

int main(void)
{
    int number, result;
    scanf("%d", &number);

    result = fact(number);
    printf("%d\n", result);

    return 0;
}

int fact(int number)
{
    int result = 0;
    if (number == 0) result = 1;
    else result = number * fact(number-1);
    return result;
}