#include<iostream>

using namespace std;

void fib(int a)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;
    cout << "Fibonacci numbers upto " << a << "th term is: ";
    for (int i = 0; i < a; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the term upto: ";
    cin >> n;
    fib(n);
    return 0;
}