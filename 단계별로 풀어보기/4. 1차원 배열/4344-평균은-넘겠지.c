#include <stdio.h>

int main(void)
{
    int caseCount, numStudent, sum;
    int average = 0;
    int cnt = 0;
    
    scanf("%d", &caseCount);
    for (int i=0; i<caseCount; i++)
    {
      sum = 0;
      scanf("%d", &numStudent);
      int input[numStudent];

      for (int j=0; j<numStudent; j++)
      {
        scanf("%d", &input[j]);
        sum += input[j];
      }

      average = sum / numStudent;
      cnt = 0;
      for (int k=0; k<numStudent; k++)
        if (input[k] > average) cnt++;

      printf("%.3f%%\n", (float)cnt / (float)numStudent * 100);
    }

    return 0;
}
