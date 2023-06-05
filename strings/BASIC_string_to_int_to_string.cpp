#include<iostream>

using namespace std;

int main()
{
    string s1 = "1234";
    int x = stoi(s1); //string to int
    cout << x + 2 << endl;

    int y = 9876;
    cout << to_string(y) + "2" << endl; //int to string

    return 0;
}