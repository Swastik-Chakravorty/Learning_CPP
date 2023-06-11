#include<iostream>

using namespace std;

string movingX(string str)
{
    if (str.length() == 0)
        return "";

    char ch = str[0];
    string ans = movingX(str.substr(1));

    if (ch == 'x')
        return (ans + ch);

    return (ch + ans);
}

int main()
{
    cout << movingX("axxbdxcefxhix") << endl;
    return 0;
}