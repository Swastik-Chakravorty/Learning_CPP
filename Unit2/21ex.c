#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Input a string in lowercase: ");
    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else
        {
            str[i] = str[i];
        }
    }

    printf("Here is the above string in UPPERCASE: %s\n", str);
    return 0;
}
