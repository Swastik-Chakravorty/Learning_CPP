#include<stdio.h>

int main()
{
    char txt1[50];
    char txt2[50];
    int count = 0;
    int i = 0;
    do
    {
        printf("Input the 1st string: ");
        fgets(txt1, 50, stdin);
    } while (txt1[0] == '\0');

    do
    {
        printf("Input the 1st string: ");
        fgets(txt2, 50, stdin);
    } while (txt2[0] == '\0');

    while (txt1[i] != '\0')
    {
        if (txt1[i] == txt2[i])
        {
            count++;
        }
        i++;
    }
    if (count == i)
    {
        printf("Strings are equal.\n");
    }

    else
    {
        printf("Strings are not equal.\n");
    }

    return 0;
}
