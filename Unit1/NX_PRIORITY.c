#include <stdio.h>
  
int main() 
{  
    int num1, num2, num3;
    int sum = 0;
    char line_text[50];
    printf("Input three numbers separated by comma : "); 
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d, %d, %d", &num1, &num2, &num3);
    sum = num1 + num2 + num3; 
    printf("The sum of three numbers : %d\n", sum);  
    return(0);  
}  

//I find this codding new, so i saved it