#include<iostream>

using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <=num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter the number for factorial: ";
    cin >> n;
    cout << "Factorial of number " << n << " is: " << factorial(n) << endl;
    return 0;
}