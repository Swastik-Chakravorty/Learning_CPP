#include<iostream>
#include<string>

using namespace std;

void printRevStr(string &str, int s)
{
    cout << "call recieved for: " << str << endl;
    if (s > (str.length() - s - 1))
        return;
 
    swap(str[s], str[(str.length() - s - 1)]);
    s++;
    printRevStr(str, s);
}

int main()
{
    string str = "abcde";
    int start = 0;
    printRevStr(str, start);

    cout << "Reverse string is: " << str << endl;
    return 0;
}