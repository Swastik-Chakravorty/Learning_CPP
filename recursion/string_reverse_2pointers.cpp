#include<iostream>
#include<string>

using namespace std;

void printRevStr(string &str, int s, int e)
{
    cout << "call recieved for: " << str << endl;
    if (s > e)
        return;
 
    swap(str[s], str[e]);
    s++;
    e--;
    printRevStr(str, s, e);
}

int main()
{
    string str = "abcde";
    printRevStr(str, 0, str.length() - 1);

    cout << "Reverse string is: " << str << endl;
    return 0;
}