#include<bits/stdc++.h>

using namespace std;

float totalPay(float hr, float pay);

int main()
{
    string theEmployee[5];
    float theHoursWorked[5], thePayRate[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the name of the No. " << i + 1 << " Employee: ";
        cin >> theEmployee[i];
        cout << "Enter the hours worked No. " << i + 1 << " Employee: ";
        cin >> theHoursWorked[i];
        cout << "Enter the pay rate of the No. " << i + 1 << " Employee: ";
        cin >> thePayRate[i];
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Name of the No. " << i + 1 << " Employee: " << theEmployee[i] << endl;
        cout << "Hours worked No. " << i + 1 << " Employee: " << theHoursWorked[i] << endl;
        cout << "Overtime hours No. " << i + 1 << " Employee: " << (theHoursWorked[i] - 40) << endl;
        cout << "Hourly pay rate No. " << i + 1 << " Employee: " << thePayRate[i] << endl;
        cout << "Employee's pay of the No. " << i + 1 << " Employee: " << totalPay(theHoursWorked[i], thePayRate[i]) << endl;
        cout << endl << endl;

    }

    return 0;
}

float totalPay(float hr, float pay)
{
    float total = 0;
    float xtra = 0;
    if(hr > 40)
    {
        xtra = (hr - 40) * pay * 1.5;
        total = (pay * 40) + xtra;
    }
    else
    total = (pay * 40);
    
    return total;
}