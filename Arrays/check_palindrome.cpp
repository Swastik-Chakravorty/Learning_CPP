#include<iostream>

using namespace std;

int main()
{
    //PALINDROME is NITIN / RACECAR / ANNA
    int n;
    cout << "Total letters in the word: ";
    cin >> n;
    char arr[n + 1]; //1 for '\0'
    cout << "Enter the word: ";
    cin >> arr;
    bool check = true;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = false;
            break;
        }
    }

    if (check == true)
    {
        cout << "Yes! the word: " << arr << " is palindrome" << endl;
    }
    else
    {
        cout << "No! the word: " << arr << " is not palindrome" << endl;
    }

    return 0;
}