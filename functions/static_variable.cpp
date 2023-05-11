#include<iostream>

using namespace std;

int sum(int x, int y)
{
    static int r = 0; //this executes only once
    r++; //next time this function will run, the value of c will be retained
    return x * y + r;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << "The sum is: " << sum(a, b) << endl;
    cout << "The sum is: " << sum(a, b) << endl;
    cout << "The sum is: " << sum(a, b) << endl;
    cout << "The sum is: " << sum(a, b) << endl;
    cout << "The sum is: " << sum(a, b) << endl;
    cout << "The sum is: " << sum(a, b) << endl;
    cout << "The sum is: " << sum(a, b) << endl;
    return 0;
}