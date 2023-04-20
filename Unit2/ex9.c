#include<stdio.h>
#include<ctype.h>

int main()
{
    char txt[50];
    int vow = 0;
    int con = 0;
    do
    {
        printf("Input the string: ");
        fgets(txt, 50, stdin);
    } while (txt[0] == '\0');

    for (int i = 0; txt[i] != '\0'; i++)
    {
        if (isalpha(txt[i]))
        {
            tolower(txt[i]);
            if (txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u')
            {
                vow++;
            }
            else 
            {
                con++;
            }
        }
    }

    printf("The total number of vowel in the string is: %d\n", vow);
    printf("The total number of vowel in the string is: %d\n", con);

    return 0;
}
