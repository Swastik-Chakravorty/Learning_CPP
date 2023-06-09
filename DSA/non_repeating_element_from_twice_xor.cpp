#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "total elements: ";
    cin >> n;
    int arr[n] = {0};
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result ^ arr[i];
    }
    cout << "The non repeating element is: " << result << endl;
    return 0;
}