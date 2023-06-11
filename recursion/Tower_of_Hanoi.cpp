#include<iostream>

using namespace std;

void towerOfHanoi(int n, char scr, char dest, char helper)
{
    if (n == 0)
        return;

    towerOfHanoi(n - 1, scr, helper,dest);
    cout << "Move from " << scr << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, dest, scr);
}

int main()
{
    towerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}