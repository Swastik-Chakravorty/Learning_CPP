#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char input[50];
    char output[50];

    printf("Input the string: ");
    fgets(input, 50, stdin);

    for (int i = 0; i < strlen(input); i++)
    {
        if (islower(input[i]))
        {
            output[i] = toupper(input[i]);
        }

        else if (isupper(input[i]))
        {
            output[i] = tolower(input[i]);
        }

        else
        {
            output[i] = input[i];
        }
    }
    
    output[strlen(input) - 1] = '\0';

    printf("The given sentence is: %s\n", input);
    printf("After Case changed the string  is: %s\n", output);
}