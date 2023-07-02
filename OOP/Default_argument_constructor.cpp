#include<iostream>

using namespace std;

class Simple{
    int data1;
    int data2;
    public:
        Simple(int a, int b = 9){
            data1 = a;
            data2 = b;
        }

        printData(){
            cout << "Value of a is: " << data1 << " and b is: " << data2 << endl;
        }
};

int main()
{
    // Simple s(1, 4); // Output 1 and 4
    Simple s(1); // Output 1 and 9
    s.printData();

    return 0;
}