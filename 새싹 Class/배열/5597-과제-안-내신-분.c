#include <stdio.h>

#define SIZE 30     // Number of students
#define ITER 28     // Number of iteration

int main(void)
{
    int array[SIZE] = {0};
    int attendanceNumber;

    for(int i=0; i<ITER; i++)
    {
        scanf("%d", &attendanceNumber);
        array[attendanceNumber-1] = 1;
    }
    
    for(int j=0; j<SIZE; j++)
        if (array[j] == 0) printf("%d\n", j+1);

    return 0;
}