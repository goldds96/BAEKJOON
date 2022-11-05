#include <stdio.h>

int main(void)
{
    char input[100];
    int count[26];
    char alphabet = 'a';
    scanf("%s", input);

    memset(count, -1, 26 * sizeof(int));

    for (int i=0; i<26; i++)
    {
        for (int j=0; j<strlen(input); j++)
        {
            if (input[j] == alphabet)
            {
                count[i] = j;
                break;
            }
        }
        alphabet++;
        printf("%d ", count[i]);
    }

    return 0;
}