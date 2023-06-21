#include<iostream>

using namespace std;

int sum(int num)
{
    //recursive way
    // if (num == 0 | num == 1)
    //     return num;

    // return num + sum(num  - 1);

    //Optimised way
    return (num * (num + 1)) / 2;
}

int main()
{
    int n;
    cout << "Number: ";
    cin >> n;

    cout << "Sum of all natural numbers upto " << n << " is: " << sum(n) << endl;
    return 0;
}