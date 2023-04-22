#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    char str1[50];
    str1[0] = '\0';
    int start, end;
    int j = 0;

    printf("Input the string: ");
    fgets(str, 50, stdin);

    printf("Input the position to start extraction: ");
    scanf("%d", &start);

    printf("Input the length of substring: ");
    scanf("%d", &end);

    for (int i = (start - 1); i <= ((start + end) - 2); i++)
    {
            str1[j] = str[i];
            j++;
    }
    str1[end] = '\0';

    printf("The substring retrieve from the string is: \"%s\"\n", str1);
    return 0;
}