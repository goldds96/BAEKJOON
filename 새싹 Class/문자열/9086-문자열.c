#include <stdio.h>

int main(void)
{
    int input;
    char array[1000];
    scanf("%d", &input);

    for (int i=0; i<input; i++)
    {
        scanf("%s", array);
        printf("%c", array[0]);
        printf("%c\n", array[strlen(array)-1]);
    }
    
    return 0;
}