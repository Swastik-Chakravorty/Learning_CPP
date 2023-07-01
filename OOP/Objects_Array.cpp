#include<iostream>

using namespace std;

class Employee{
    int id;
    int salary = 122;

    public:
        void setId(){
            cout << endl;
            cout << "Enter the id of employee: ";
            cin >> id;
        }
        void getDetails(){
            cout << "The ID of this employee is: " << id 
            << " and salary is: " << (salary * id * 10)<< endl;
        }
};

int main()
{
    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getDetails();
    }

    return 0;
}