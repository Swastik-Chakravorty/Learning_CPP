#include<stdio.h>
#include<string.h>

int main()
{
    char txt[50];
    do
    {
        printf("Input the string: ");
        gets(txt);
    } while (txt[0] == '\0');

    printf("The characters of the string in reverse are: \n");
    for (int i = (strlen(txt) -1); i >= 0; i--)
    {
        printf(" %c ", txt[i]);
    }

    return 0;
}
