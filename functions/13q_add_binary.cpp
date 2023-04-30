#include<iostream>

using namespace std;

int reverse(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans = ans * 10 + lastDigit;
        n /= 10;
    }
    return ans;
}

int binSum(int x, int y)
{
    int sum = 0;
    int prevCarry = 0;

    while (x > 0 && y > 0)
    {
        if (x % 2 == 0 && y % 2 == 0)
        {
            sum = sum * 10 + prevCarry;
            prevCarry = 0;
        }
        else if ((x % 2 == 0 && y % 2 == 1) || (x % 2 == 1 && y % 2 == 0))
        {
            if (prevCarry == 1)
            {
                sum = sum * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                sum = sum * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            // if (prevCarry = 1)
            // {
            //     sum = sum * 10 + 1;
            //     prevCarry = 1;
            // }
            // else
            // {
            //     sum = sum * 10 + 0;
            //     prevCarry = 1;
            // }
            //short process is mentioned under
            sum = sum * 10 + prevCarry;
            prevCarry = 1;
        }
        x /= 10;
        y /= 10;
    }

    while (x > 0)
    {
        if (x % 2 == 0)
        {
            sum = sum * 10 + prevCarry;
            prevCarry = 0;
        }
        else
        {
            if (prevCarry == 1)
            {
                sum = sum * 10 + 0;
                prevCarry = 1;
            }
            else if (prevCarry == 0)
            {
                sum = sum * 10 + 1;
                prevCarry = 0;
            }
        }
        x /= 10;
    }

    while (y > 0)
    {
        if (y % 2 == 0)
        {
            sum = sum * 10 + prevCarry;
            prevCarry = 0;
        }
        else
        {
            if (prevCarry == 1)
            {
                sum = sum * 10 + 0;
                prevCarry = 1;
            }
            else if (prevCarry == 0)
            {
                sum = sum * 10 + 1;
                prevCarry = 0;
            }
        }
        y /= 10;
    }

    if (prevCarry == 1)
    {
        sum = sum * 10 + 1;
    }

    sum = reverse(sum);

    return sum;
}

int main()
{
    int a, b;
    cout << "Enter two binary numbers: ";
    cin >> a >> b;
    cout << "Binary sum is: " << binSum(a, b) << endl;
    return 0;
}