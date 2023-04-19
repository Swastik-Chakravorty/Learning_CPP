#include<stdio.h>

int main()
{
    char txt[50];
    int len = 0;
    do
    {
        printf("Input the string: ");
        gets(txt);
    } while (txt[0] == '\0');

    for (int i = 0; txt[i] != '\0'; i++)
    {
        len++;
    }

    printf("Length of the string is: %d\n", len);

    return 0;
}
