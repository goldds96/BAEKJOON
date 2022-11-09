#include <stdio.h>

int main(void)
{
    int hour, minute, returnHour, returnMinute;
    scanf("%d %d", &hour, &minute);
    
    if (minute < 45)
    {
      returnMinute = minute + 15;
      hour>0 ? (returnHour = hour - 1) : (returnHour = 23);
    }
    else
    {
      returnMinute = minute - 45;
      returnHour = hour;
    }
    printf("%d %d", returnHour, returnMinute);

    return 0;
}
