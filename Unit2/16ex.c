#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int count = 0;

    printf("Input the string: ");
    fgets(str, 50, stdin);

    for (int i = 0; i < (strlen(str) - 2); i++)
    {
        if ((str[i] == 't' || str[i] == 'T')
        && (str[i + 1] == 'h' || str[i + 1] == 'H')
        && (str[i + 2] == 'e' || str[i + 2] == 'E')
        && (str[i + 3] == ' ' || str[i + 3] == '.' || str[i + 3] == ','))
        {
            count++;
        }
    }

    printf("%d\n", count);
}