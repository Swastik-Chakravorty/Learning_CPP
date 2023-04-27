#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    char alpha;
    int count = 0;

    printf("Input the string: ");
    fgets(str, 50, stdin);
    printf("Input the character to find frequency: ");
    scanf("%c", &alpha);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == alpha)
        {
            count++;
        }
    }

    printf("The frequency of '%c' is: %d", alpha, count);
    return 0;
}
