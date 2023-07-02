#include<iostream>

using namespace std;

class Complex{
    int x, y;
    public:
    //creating a constructor
    // Complex(void);
    Complex(int, int, int);
    Complex(int, int);

    void printNumber()
    {
        cout << "Complex number is: " << x << " + " << y << "i" << endl;
    }
};

// Complex :: Complex(void)
// {
//     a = 10;
//     b = 0;
// }

Complex :: Complex(int a, int b, int c){
        x = a;
        y = b * c;
    }

Complex :: Complex(int a, int b){
        x = a;
        y = b;
    }

int main()
{
    //Implicit call
    Complex num1(5, 2, 3);
    Complex num2(10, 25);

    //Explicit call
    Complex num3 = Complex(4, 5, 6);
    num1.printNumber();
    num2.printNumber();
    num3.printNumber();

    return 0;
}

/*Properties:
1. Should be declared in public:
2. They automatically invoked
3. They dont return values and have no return type
4. They can have default arguments
5. We cannot refer to their address */
