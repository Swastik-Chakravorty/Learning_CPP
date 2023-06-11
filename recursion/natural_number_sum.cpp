#include<iostream>

using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main()
{
    int num;
    cout << "Upto number: ";
    cin >> num;
    cout << "Sum of the natural numbres upto " << num << " is: " << sum(num) << endl;
    return 0;
}