#include<iostream>

using namespace std;

class Employee{
    int id;
    static int count;

    public:
        void setData(){
            cout << endl;
            cout << "Enter the ID: ";
            cin >> id;
            count++;
        }

        void getData(){
            cout << "The ID of employee No. " << count << " is: " << id;
            cout << endl;
        }

        static void getCount(){
            cout << "The value of count is: " << count << endl; 
            //can access only static variable
        }
};

int Employee :: count = 1000; 
// By default static value 0; if want to initialize it with other value, have to initialize in (here^^^ -->> class :: count = (Value, i.e. 1000)) and take memory once and updated in the same memory

int main()
{
    Employee swastik, dimpi, mum;

    swastik.setData();
    swastik.getData();
    Employee :: getCount(); //syntax for calling static function

    dimpi.setData();
    dimpi.getData();
    Employee :: getCount();

    mum.setData();
    mum.getData();
    Employee :: getCount();
    
    return 0;
}