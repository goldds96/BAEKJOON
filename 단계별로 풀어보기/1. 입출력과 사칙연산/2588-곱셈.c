#include <stdio.h>

int main(void)
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);

    printf("%d\n", number1 * ((number2 % 100) % 10));
    printf("%d\n", number1 * ((number2 % 100) / 10));
    printf("%d\n", number1 * (number2 / 100));
    printf("%d", number1 * number2);

    return 0;
}
