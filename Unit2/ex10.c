#include<stdio.h>
#include<ctype.h>

int main()
{
    char txt[50];
    char alph = '\0';
    int ocr = 0;
    int maxOcr = 0;
    do
    {
        printf("Input the string: ");
        fgets(txt, 50, stdin);
    } while (txt[0] == '\0');

    for (int i = 0; txt[i] != '\0'; i++)
    {
        ocr = 0;
        if (isalpha(txt[i]))
        {
            tolower(txt[i]);
            for (int j = 0; txt[j] != '\0'; j++)
            {
                if (txt[i] == txt[j])
                {
                    ocr++;
                }

            }
            if (maxOcr < ocr)
            {
                maxOcr = ocr;
                alph = txt[i];
            }
            
        }
    }

    printf("The Highest frequency of character '%c'\n", alph);
    printf("appears number of times: %d\n", maxOcr);
    return 0;
}
