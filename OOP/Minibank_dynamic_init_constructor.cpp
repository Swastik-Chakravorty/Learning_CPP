#include<iostream>

using namespace std;

class bankDeposit{
    int principal;
    int year;
    float interestRate;
    float returnValue;

    public:
        bankDeposit(){}
        bankDeposit(int p, int y, float r); // r can be value like 0.04
        bankDeposit(int p, int y, int r); // r can be value like 14
        void show();
};

bankDeposit :: bankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

bankDeposit :: bankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

void bankDeposit :: show()
{
    cout << endl << "Principal amount was " << principal << endl
    << "Return value after " << year << " year is: " << returnValue << endl;
}

int main()
{
    bankDeposit b1, b2, b3;
    // bankDeposit b1, b2; // b3;
    // bankDeposit b1, b2; // b3;
    int p, y, R;
    float r;
    cout << "Enter p, y, r: ";
    cin >> p >> y >> r;

    b1 = bankDeposit(p, y, r);
    b1.show();

    cout << endl << endl;

    cout << "Enter p, y, R: ";
    cin >> p >> y >> R;

    b2 = bankDeposit(p, y, R);
    b2.show();
    // b3.show();
    return 0;
}