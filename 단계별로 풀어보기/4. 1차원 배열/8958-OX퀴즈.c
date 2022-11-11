#include <stdio.h>
#include <string.h>

int main(void)
{
    int count, combo, result;
    char input[80];

    scanf("%d", &count);
    for (int i=0; i<count; i++)
    {
      scanf("%s", input);
      combo = 0;
      result = 0;
      for (int i=0; i<strlen(input); i++)
      {
        if (input[i] == 'O')
          combo += 1;
      
        else
        {
          for (int j=1; j<combo+1; j++)
            result += j;
          combo = 0;
        }
        
        if ((i==strlen(input)-1) && combo)
          for (int j=1; j<combo+1; j++)
            result += j;
      }
      printf("%d\n", result);
    }
    
    return 0;
}
