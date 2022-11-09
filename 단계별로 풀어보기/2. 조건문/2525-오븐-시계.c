#include <stdio.h>

int main(void)
{
    int hour, minute, cookingTime, returnHour, returnMinute;
    scanf("%d %d", &hour, &minute);
    scanf("%d", &cookingTime);
    
    if ((cookingTime + minute) >= 60)
    {
      returnMinute = (cookingTime + minute) % 60;
      hour = hour + (cookingTime + minute) / 60;
      hour>23 ? (returnHour = hour - 24) : (returnHour = hour);
    }
    else
    {
      returnMinute = minute + cookingTime;
      returnHour = hour;
    }
    printf("%d %d", returnHour, returnMinute);

    return 0;
}
