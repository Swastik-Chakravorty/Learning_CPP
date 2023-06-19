#include<iostream>
#include<string>

using namespace std;

bool palindrome(string &str, int s)
{
    cout << "call recieved for: " << str << endl;
    if (s > (str.length() - s - 1))
        return true;
 
    if (str[s] != str[(str.length() - s - 1)])
        return false;

    else
    {
        s++;
        return palindrome(str, s);
    }
}

int main()
{
    string str = "radar";
    int start = 0;

    if (palindrome(str, start))
    cout << "Yes! the string is pilindrome." << endl;

    else
    cout << "No! the string isn't pilindrome." << endl;
    return 0;
}