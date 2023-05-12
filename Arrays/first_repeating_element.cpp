#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;
    int a[n];
    cout << "Elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //here we are taking big number of arrays(idx[]) and a variable "minidx", as we have to update idx[element of a[i]] with value of i and element can be big
    const int N = 1e3 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1; //first initializing idx[] elements with -1, as i of a[i] never can be -1
    }
    int minidx = N;
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] == -1)
        {
            idx[a[i]] = i; //storing the idx[element of a[i]] with index value(i) of a[i], as if the element will repeat we have to update i
        }
        else //if idx[element of a[i]] is not '-1', i.e. idx[] already has a value of i and we are getting new value of i for the same element
        {
            minidx = min(minidx, idx[a[i]]); //we have to store minimum value of i between previous stored 'i'(for same element a[i]) and new 'i'(for same element a[i])
        }
    }

    if (minidx == N) //when no elements repeated, minidx will not updated
    {
        cout << "Error! " << "-1" << endl;
    }
    
    else
    {
        cout << "the first repeating element is: " << minidx + 1 << endl;
    }

    return 0;
}