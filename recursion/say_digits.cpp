#include<iostream>
#include<cstring>

using namespace std;

//long solution

// void sayDigit(int n, string digit[])
// {
//     int say[10] = {0};
//     int i = 0;

//     if (n == 0)
//     {
//         return;
//     }
    
//     say[i] = n % 10;
//     i++;
//     n /= 10;

//     sayDigit(n, digit);

//     for (int j = (i - 1); j >= 0; j--)
//     {
//         cout << digit[say[j]] << " ";
//     }
// }

//Short solution

void sayDigit(int n, string say[])
{
    if (n == 0)
        return;

    int rem = n % 10;
    n /= 10;
    sayDigit(n, say);

    cout << say[rem] << " ";
}

int main()
{
    string digit[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int num;
    cout<< "Enter the number: ";
    cin >> num;
    sayDigit(num, digit);
    cout << endl;

    return 0;
}