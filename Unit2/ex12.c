#include<stdio.h>
#include<string.h>

int main()
{
    int num;
    char swap[50];
    printf("Input number of strings: ");
    scanf("%d", &num);
    char str[num][50];

    printf("Input string %d:\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s", str[i]);
    }

    printf("\nThe strings appears after sorting: \n");
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(swap, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], swap);
            }
        }
        printf("%s\n", str[i]);
    }

}
