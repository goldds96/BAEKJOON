#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input[100];
    scanf("%s", input);

    for (int i=0; i<strlen(input); i++)
    {
        if (isupper(input[i]))
            printf("%c", tolower(input[i]));
        else
            printf("%c", toupper(input[i]));
    }

    return 0;
}