#include<iostream>

using namespace std;

//finding fibonacci with recursion is not a good idea, as it takes too many steps extra, so its better to use iterative approach to find fibonacci sequence
int fibonacci(int num)
{
    if (num < 2)
    {
        return 1;
    }
    return fibonacci(num - 2) + fibonacci(num - 1);
}

//fib(5):
//fib(3) + fib(4)
//fib(3) = [fib(1) + fib(2)] + fib(4) = [fib(2) + fib(3)]
//fib(3) = [fib(1) + fib(2)] + fib(2) = [fib(0) or 1 + fib(1) or 1]
//fib(2) = [fib(0) or 1 + fib(1) or 1] + fib(1) = 1

int main()
{
    int n;
    cout << "Enter the term of Fibonacci sequence: ";
    cin >> n;
    cout << "The term at fibonacci sequence at position " << n << " is: " << fibonacci(n) << endl;
    return 0;
}