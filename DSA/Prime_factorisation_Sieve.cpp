#include<iostream>
#include<cmath>

using namespace std;

void primeFactor(int n)
{
    int spf[n] = {0}; //spf = smallest prime factor
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i; //initializing spf indexes with the same value as index
    }

    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (spf[i] == i) //upto sqrt(n), all numbers will be right
        {
            for (int j = i * i; j <= n; j+= i)
            {
                if (spf[j] = j) //true upto sqrt(n)
                    spf[j] = i; //now will be initialized with smallest prime factor
            }
        }
    }

    while (n != 1) //checking all elements
    {
        cout << spf[n] << " "; //prime factor of last number
        n /= spf[n]; //by deviding n with prime factor, we'll get next prime factor
    }
}

int main()
{
    int num;
    cin >> num;
    primeFactor(num);
    
    return 0;
}