#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50];

    printf("Input the string: ");
    fgets(str, 50, stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        if (!isalpha(str[i]))
        {
            for (int j = i; j < strlen(str); j++)
            {
                str[j] = str[j + 1];
            }
        }
    }

    printf("After removing the Output String: %s", str);
    return 0;
}
