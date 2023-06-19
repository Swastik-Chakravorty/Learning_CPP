//when b is even; a^b = a^(b/2) * a^(b/2) 
//and when b is odd; a^b = a * a^(b/2) * a^(b/2)
#include<iostream>

using namespace std;

int power(int x, int y)
{
    //base case
    if (y == 0)
        return 1;

    if (y == 1)
        return x;

    //recursive call
    int ans = power(x, y / 2);

    //if y is even
    if ((y & 1) == 0) //in even number last bit always 0 and (0 & 1) is 0
        return ans * ans;

    else //if y is odd
        return x * ans * ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);

    cout << "Answer is: " << ans << endl;
    return 0;
}