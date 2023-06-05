#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string num;
    cout << "Enter the number, it will be stored in string form: ";
    cin >> num;

    cout << "The biggest number can be form with this numeric string is: ";
    sort(num.begin(), num.end(), greater<int>()); //to find the biggest number
    cout << num << endl;
    return 0;
}