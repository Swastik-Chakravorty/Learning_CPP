#include<iostream>

using namespace std;

inline int product(int x) //use for very small lines of code and DON'T USE (in recursion, in static variables, loops, in switch) and COMPILER will decide wheather it'll make your function inline or not
{
    return x * (x + 1);
}

int main()
{
    int a, b;
    do
    {
        cout << "Enter two values: ";
        cin >> a >> b;
    } while (a > b);
    
    for (int i = a; i < b; i++)
    {
        cout << "Product of " << i << " and " << i + 1 << " is: " << product(i) << endl;
    }

    return 0;
}
