#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter the number: ";
    cin >> n;
    int final = n;
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += (lastdigit * lastdigit * lastdigit);
        n /= 10;
    }
    if (final == sum)
    {
        cout << "The number is a armstrong number" << endl;
    }
    else
    {
        cout << "The number is not a armstrong number" << endl;
    }
    return 0;
}