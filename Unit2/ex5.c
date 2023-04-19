#include<stdio.h>

int main()
{
    char txt[50];
    int count = 0;
    do
    {
        printf("Input the string: ");
        fgets(txt, 50, stdin);
    } while (txt[0] == '\0');

    for (int i = 0; txt[i] != '\0'; i++)
    {
        if (txt[i] == ' ')
        {
            count++;
        }
    }

    printf("Total number of words in the string is: %d\n", count + 1);
    return 0;
}
