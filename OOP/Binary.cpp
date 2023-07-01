#include<iostream>

using namespace std;

class Binary
{
    //private:
        string str;
        void checkBinary();

    public:
        // bool check = true;
        void read();
        void ones_compliment();
        void display();
};

void Binary :: read(){
    cout << "Enter a binary number: ";
    cin >> str;
}

void Binary :: checkBinary(){
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            cout << "Incorrect binary format!" << endl;
            // check = false;
            exit(0); //exit(0) is using to end the program like return 0;
        }
    }
}

void Binary :: ones_compliment(){
    checkBinary(); //nesting of member function
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
            str.at(i) = '0';
    }
}

void Binary :: display(){
    cout << "One's compliment of the number is:" << endl;
    for (int i = 0; i < str.length(); i++)
    {
        cout << str.at(i);
    }
    cout << endl;
}

int main()
{
    Binary b;
    b.read();
    // b.checkBinary();

    // if (b.check)
    // {
        b.ones_compliment();
        b.display();
    // }

    return 0;
}