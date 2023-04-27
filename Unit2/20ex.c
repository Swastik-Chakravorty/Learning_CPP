#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    char word[50][50];
    word[0][0] = '\0';
    char small[50];
    small[0] = '\0';
    char large[50];
    large[0] = '\0';
    int j = 0;
    int k = 0;

    printf("Input the string: ");
    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i]))
        {
            word[j][k] = str[i];
            k++;
        }
        
        else
        {
            word[j][k] = '\0';
            j++;
            k = 0;
        }
    }

    strcpy(small, word[0]);
    strcpy(large, word[0]);

    for (int l = 0; l < j; l++)
    {
        if (strlen(small) > strlen(word[l]))
        {
            if (strlen(word[l]) > 1)
            {
                strcpy(small, word[l]);
            }
        }
        if (strlen(large) < strlen(word[l]))
        {
            strcpy(large, word[l]);
        }
    }

    printf("The largest word is '%s' and the smallest word is '%s' in the string: '%s'.\n", large, small, str);

    return 0;
}
