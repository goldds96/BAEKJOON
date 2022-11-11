#include <stdio.h>


int main(void)
{   
    int count;
    int max = 0;
    float result = 0;
    scanf("%d", &count);

    int score[count];
    for (int i=0; i<count; i++)
    {
      scanf("%d", &score[i]);
      if (score[i] > max)
        max = score[i];
    }
    
    for(int j=0; j<count; j++)
      result += (float)score[j] / (float)max * 100;

    printf("%f", result / count);

    return 0;
}
