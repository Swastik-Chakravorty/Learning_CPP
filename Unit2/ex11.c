#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *remSeg(char *txt);
char *sort(char *txt1);

int main()
{
    char txt[50];

    do
    {
        printf("Input the string: ");
        fgets(txt, 50, stdin);
    } while (txt[0] == '\0');

    printf("After sorting the string appears like: %s\n", sort(remSeg(txt)));

    return 0;
}

char *remSeg(char *txt)
{
    int j = 0;
    char alph = '\0';

    for (int i = 0; txt[i] != '\0'; i++)
    {
        if (txt[i] == ' ')
        {
            for (int k = i; k < strlen(txt); k++)
            {
                txt[k] = txt[k + 1];
            }
            i--;
        }
        else if (isdigit(txt[i]))
            {
                alph = txt[i];
                txt[i] = txt[j];
                txt[j] = alph;
                j++;
            }
    }
    return txt;
}


char *sort(char *txt1)
{
    char alph = '\0';
    for (int i = 0; i < strlen(txt1) - 1; i++)
    {
        for (int k = i + 1; k < strlen(txt1); k++)
        {
             if (txt1[i] > txt1[k])
            {
                alph = txt1[i];
                txt1[i] = txt1[k];
                txt1[k] = alph;
            }
        }
    }
    return txt1;
}