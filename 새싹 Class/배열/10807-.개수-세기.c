#include <stdio.h>

int main(void)
{
    int size, number;
    int count = 0;
    scanf("%d", &size);
    
    int array[size];
    for(int i=0; i<size; i++)
        scanf("%d", &array[i]);
    scanf("%d", &number);

    for(int j=0; j<size; j++)
        if(array[j] == number) count += 1;
    
    printf("%d\n", count);

    return 0;
}