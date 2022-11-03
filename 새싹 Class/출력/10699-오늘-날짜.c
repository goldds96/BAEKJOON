#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL);
    struct tm tstruct = *localtime(&now);

    char buf[40];
    strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);
    for (int i=0; i=='\0'; i++) 
    {
        printf("%s", buf);
    }

    return 0; 
}