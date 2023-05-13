#include<iostream>

using namespace std;

float special(char ch, int tkt)
{
    if (ch == 'm' || ch == 'M')
    {
        return (float)((10 * tkt) - ((10 * tkt) * 0.1));
    }

    if (ch == 'c' || ch == 'C')
    {
        return (float)((15 * tkt) - ((15 * tkt) * 0.2));
    }
}

float ordinary(char ch, int tkt, int tktCount)
{
    if ((ch == 'y' || ch == 'Y') && tktCount < 100)
    {
        return (float)((15 * tkt) - ((15 * tkt) * 0.1));
    }

    if ((ch == 'n' || ch == 'N') || tktCount >= 100)
    {
        return (float)tkt * 10;
    }
}

int main()
{
    char user, spcl, ord;
    int count = 0;
    int ordOff = 0;
    int splTkt, ordTkt;
    while ((user != 'p' && user != 'P' && user != 's' && user != 'S' && user != 'o' && user != 'O') && count < 5)
    {
        if (count > 0 && count < 4)
        {
            cout << "Please enter the correct alphabet ('p' for pensioner, 's' for student, 'o' for other): ";
        }
        else if (count == 4)
        {
            cout << "This is your last attempt: Please enter the correct alphabet ('p' for pensioner, 's' for student, 'o' for other): ";
        }
        else
        {
            cout << "Please enter 'p' if you are a pensioner, 's' if you are a student, 'o' for other: ";
        }
        cin >> user;
        count++;
    }
    count = 0;

    if (user == 'p' || user == 'P' || user == 's' || user == 'S')
    {
        while ((spcl != 'm' && spcl != 'M' && spcl != 'c' && spcl != 'C') && count < 5)
        {
            if (count > 0 && count < 4)
            {
                cout << "PLease enter the correct alphabet: 'm' for only movie or 'c' for combination of movie with popcorn: ";
            }
            else if (count == 4)
            {
                cout << "This is your last attempt: PLease enter the correct alphabet: 'm' for only movie or 'c' for combination of movie with popcorn: ";
            }
            else
            {
                cout << "Congradulation! You'll get '10%' discount for only movie ticket and '20%' discount for movie ticket with popcorn. Only students and pensioners will get this offer. Movie ticket cost $10 and popcorn cost $5. PLease enter 'm' for only movie or 'c' for combination of movie with popcorn: ";
            }
            cin >> spcl;
            count++;
        }
        count = 0;
        if (spcl == 'm' || spcl == 'M' || spcl == 'c' || spcl == 'C')
        {
            cout << "Please enter how many tickets you want: ";
            cin >> splTkt;
        }
        cout << "Total cost for your tickets: $" << special(spcl, splTkt);
    }

    else if (user == 'o' || user == 'O')
    {
        while ((ord != 'y' && ord != 'Y' && ord != 'n' && ord != 'N') && count < 5 && ordOff < 100)
        {
            if (count > 0 && count < 4)
            {
                cout << "PLease enter the correct alphabet: 'y' for Yes, to watch movie with popcorn or 'n' for No, to watch movie only: ";
            }
            else if (count == 4)
            {
                cout << "This is your last attempt: PLease enter the correct alphabet: 'y' for Yes, to watch movie with popcorn or 'n' for No, to watch movie only: ";
            }
            else
            {
                cout << "Congradulation! You'll get '10%' discount if you choose movie ticket with popcorn. Only first 100 customers(not for students and pensioners) will get this offer. Movie ticket cost $10 and popcorn cost $5. PLease enter 'y' for Yes, to watch movie with popcorn or 'n' for No, to watch movie only: ";
            }
            cin >> ord;
            count++;
            ordOff++;
        }
        count = 0;

        while ((ord != 'y' && ord != 'Y' && ord != 'n' && ord != 'N') && count < 5 && ordOff >= 100)
        {
            if (count > 0 && count < 4)
            {
                cout << "PLease enter the correct alphabet: 'y' for Yes, to watch movie with popcorn or 'n' for No, to watch movie only: ";
            }
            else if (count == 4)
            {
                cout << "This is your last attempt: PLease enter the correct alphabet: 'y' for Yes, to watch movie with popcorn or 'n' for No, to watch movie only: ";
            }
            else
            {
                cout << "Sorry! You missed the offer. Only first 100 customers(not for students and pensioners) got that offer. Movie ticket cost $10 and popcorn cost $5. PLease enter 'y' for Yes, to watch movie with popcorn or 'n' for No, to watch movie only: ";
            }
            cin >> ord;
            count++;
        }
        if (ord == 'y' || ord == 'Y' || ord == 'n' || ord == 'N')
        {
            cout << "Please enter how many tickets you want: ";
            cin >> ordTkt;
        }
        cout << "Total cost for your tickets: $" << ordinary(ord, ordTkt, ordOff);
    }
    return 0;
}