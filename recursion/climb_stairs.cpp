#include<iostream>

using namespace std;

int climb(int dest)
{
    if (dest < 0)
        return 0;
        
    if (dest == 0)
        return 1;

    return climb(dest - 1) + climb(dest - 2);
}

int main()
{
    int stairs;
    cout << "Total stairs: ";
    cin >> stairs;

    cout << "Total steps: " << climb(stairs) << endl;
    
    return 0;
}