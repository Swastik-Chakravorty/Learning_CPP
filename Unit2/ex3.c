#include<stdio.h>

int main()
{
    char txt[50];
    do
    {
        printf("Input the string: ");
        gets(txt);
    } while (txt[0] == '\0');

    printf("The characters of the string are: \n");
    for (int i = 0; txt[i] != '\0'; i++)
    {
        printf(" %c ", txt[i]);
    }

    return 0;
}
