#include<iostream>

using namespace std;

//in argument first write compulsory argument -->> then write default argument
float moneyReceived(int capital, float interest = 1.04) //if you don't pass the value of interest, your calculation will take the default value of interest; this is called default argument
{
    return capital * interest;
}

int main()
{
    int money;
    cout << "Enter your investment capital: ";
    cin >> money;
    
    cout << "if you've invested Rs." << money << " You will received Rs." << moneyReceived(money) << endl;
    cout << "if you've invested Rs." << money << " and you are a VIP, You will received Rs." << moneyReceived(money, 1.1) << endl;

    return 0;
}
