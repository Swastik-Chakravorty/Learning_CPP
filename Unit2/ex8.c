#include<stdio.h>

int main()
{
    char str1[50] = "This is a string to be copied";
    char str2[100] = "This is second string, first string will be copeid here";
    int i = 0;
    printf("The First string is: %s\n", str1);
    printf("The Second string is: %s\n", str2);
  
    for (i; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("The Second string after copy is: %s\n", str2);
    return 0;
}
