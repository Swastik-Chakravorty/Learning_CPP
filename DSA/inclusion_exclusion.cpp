#include<iostream>

using namespace std;

int main()
{
    int num, div1, div2;

    cout << "Number upto: ";
    cin >> num;

    cout << "Devisible by 1st number: ";
    cin >> div1;

    cout << "Devisible by 2nd number: ";
    cin >> div2;

    int c1 = num / div1;
    int c2 = num / div2;
    int c3 = num / (div1 * div2);

    cout << "Total numbers devisible by " << div1 << " & " << div2 << " is: " << (c1 + c2) - c3 << endl;
    return 0;
}