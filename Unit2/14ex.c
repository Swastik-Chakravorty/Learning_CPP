#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    char search[50];
    int flag;

    printf("Input the string: ");
    fgets(str, 50, stdin);

    printf("Input the substring to be search: ");
    fgets(search, 50, stdin);

    for (int i = 0; i <= ((strlen(str) - 1) - (strlen(search) - 1)); i++)
    {
        for (int j = i; j < (i + strlen(search) - 1); j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }

    }

    if (flag == 1)
    {
    printf("The substring is exists in the string.");
    }
    else
    {
    printf("The substring is not exists in the string.");
    }
    return 0;
}