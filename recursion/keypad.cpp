#include<iostream>
#include<string>

using namespace std;

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = str[0];
    string code = keypadArr[ch - '0'];
    string ros = str.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, (ans + code[i]));
    }
}

int main()
{
    keypad("23", "");
    cout << endl;
    return 0;
}