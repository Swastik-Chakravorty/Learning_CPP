#include<stdio.h>
#include<ctype.h>

int main()
{
    char txt[50];
    int alph = 0;
    int dig = 0;
    int spec = 0;
    do
    {
        printf("Input the string: ");
        fgets(txt, 50, stdin);
    } while (txt[0] == '\0');

    for (int i = 0; txt[i] != '\0'; i++)
    {
        if (isalpha(txt[i]))
        {
            alph++;
        }

        if (isdigit(txt[i]))
        {
            dig++;
        }

        if (ispunct(txt[i]))
        {
            spec++;
        }
    }

    printf("Number of Alphabets in the string is: %d\n", alph);
    printf("Number of Digits in the string is: %d\n", dig);
    printf("Number of Special characters in the string is: %d\n", spec);
    return 0;
}
