#include <stdio.h>

int main(void)
{
    int size, x;
    scanf("%d %d", &size, &x);

    int array[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
        if(array[i] < x)
            printf("%d ", array[i]);
    }

    return 0;
}