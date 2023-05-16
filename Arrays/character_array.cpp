#include<iostream>

using namespace std;

int main()
{
    char arr[50] = "apple is red";
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;

    //Input and Output
    char arr1[50];
    cout << "Input: ";
    cin >> arr1; //by this only 1 word can be gotten

    cout << "You've entered: " << arr1 << endl;

    return 0;
}