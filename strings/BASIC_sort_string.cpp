#include<iostream>
#include<algorithm> //to use algorithmic sort function
#include<string>

using namespace std;

int main()
{
    string s1 = "qwertyuiopasdfghjklzxcvbnm";

    sort(s1.begin(), s1.end()); //s1.begin() will give starting iterator 
    // & s1.end() give us iterator next of the string end

    cout << s1 << endl;
    return 0;
}