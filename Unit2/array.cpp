#include<iostream>

using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the " << i + 1 << " number: " << endl;
        cin >> arr[i];
    }

    for (int j = 0; j < 10; j++)
    {
        cout << j + 1 << " number is: " << arr[j] << endl;
    }
    return 0;
}