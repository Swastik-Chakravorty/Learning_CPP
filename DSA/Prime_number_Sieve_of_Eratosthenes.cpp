#include<iostream>
#include<cmath>

using namespace std;

void primeSieve(int n)
{
    int arr[n + 1] = {0}; //we set arr["n"], cause index will determine the results

    for (int i = 2; i <= sqrt(n); i++) //inspect each element, starting with 2 as it's 1st prime number
    {
        // arr[i] already declared 0 for all element, so 1st time its true, next time will check 
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i) //starting with i^2; i.e. 2^2 = 4, then it'll increment by i; i.e. 4+2(i) = 6, and so on
                arr[j] = 1; //if the j is less than n, it'll set arr[index] to 1
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0) //index is not (i * i) or ((i * i) + i)
        {
            cout << i << " "; //index numbers are the prime number
        }
    }
    cout << endl;
}

int main()
{
    int num;
    cin >> num;
    primeSieve(num);
    return 0;
}