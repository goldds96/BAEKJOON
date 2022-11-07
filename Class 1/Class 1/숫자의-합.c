#include <stdio.h>

int main(void)
{
    int number;
    char input[100];
    int sum = 0;
    
    scanf("%d", &number);
    scanf("%s", input);
    
    for (int i=0; i<number; i++)    
        sum += input[i] - '0';
    
    printf("%d", sum);

    return 0;
}