#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    if (num > 0)
    {
        cout << "Number is positive" << endl;
    }
    else if (num < 0)
    {
        cout << "Number is negative" << endl;
    }
    else if (num == 0)
    {
        cout << "Number is zero" << endl;
    }
    return 0;
}