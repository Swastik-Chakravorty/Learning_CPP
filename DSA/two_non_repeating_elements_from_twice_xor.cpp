#include<iostream>

using namespace std;

int main()
{
    int arr[8] = {2, 3, 7, 9, 11, 2, 3, 11};
    int result = 0;
    for (int i = 0; i < 8; i++)
    {
        result ^= arr[i];
    }
    int temp = result;
    int setBit = result & (~(result - 1));

    for (int i = 0; i < 8; i++)
    {
        if((arr[i] & setBit) != 0)
            temp ^= arr[i];

        else
            result ^= arr[i];
    }
        cout << "Two non repeating elements are: " << temp << " & " << result << endl;

    return 0;
}