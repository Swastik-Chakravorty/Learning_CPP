#include<iostream>

using namespace std;

//This is recursive approach and iterative approach is using for loop, while loop, do - while loop
int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

//steps of recursion for factorial of 4
//factorial(4) = 4 * factorial(3);
//factorial(4) = 4 * 3 * factorial(2);
//factorial(4) = 4 * 3 * 2 * factorial(1);
//factorial(4) = 4 * 3 * 2 * 1;
//factorial(4) = 24;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n) <<endl;
    return 0;
}