#include <stdio.h>

int main(void)
{
    char score[2];
    scanf("%s", score);
    
    switch(score[0])
    {
        case 'A':
            score[1] == '+' ? printf("%.1f", 4.3) : score[1] == '0' ? printf("%.1f", 4.0) : printf("%.1f", 3.7);
            break;
        case 'B':
            score[1] == '+' ? printf("%.1f", 3.3) : score[1] == '0' ? printf("%.1f", 3.0) : printf("%.1f", 2.7);
            break;
        case 'C':
            score[1] == '+' ? printf("%.1f", 2.3) : score[1] == '0' ? printf("%.1f", 2.0) : printf("%.1f", 1.7);
            break;
        case 'D':
            score[1] == '+' ? printf("%.1f", 1.3) : score[1] == '0' ? printf("%.1f", 1.0) : printf("%.1f", 0.7);
            break;
        case 'F':
            printf("%.1f", 0.0);
    }

    return 0;
}
