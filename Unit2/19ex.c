#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50];
    char str2[50];
    char newstr[100];

    printf("Input the first string: ");
    fgets(str1, 100, stdin);
    printf("Input the second string: ");
    fgets(str2, 50, stdin);

    for (int i = 0; i < strlen(str1) - 1; i++)
    {
        newstr[i] = str1[i];
    }
    newstr[strlen(str1) - 1] = ' ';

    for (int j = 0; j < strlen(str2) - 1; j++)
    {
        newstr[strlen(str1) + j] = str2[j];
    }
    newstr[strlen(str1) + (strlen(str2) - 1)] = '\0';

    printf("After concatenation the string is: %s\n", newstr);
    return 0;
}
