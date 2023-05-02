#include<iostream>

using namespace std;

void operation(int a, int b, char c);

int main()
{
    int a, b;
    char op;
    cout << "Choice for (add(+), subtract(-), multiply(x), devide(/) modulo(%) and power(^)): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    operation(a, b, op);
    return 0;
}

void operation(int a, int b, char c)
{
    int result = 0;
    switch (c)
    {
    case '+':
        result = a + b;
        cout << "Sum is: " << result << endl;
        break;
    case '-':
        result = a - b;
        cout << "Subtraction is: " << result << endl;
        break;
    case 'x':
        result = a * b;
        cout << "Multiplication is: " << result << endl;
        break;
    case '/':
        result = a / b;
        cout << "Quotient is: " << result << endl;
        break;
    case '%':
        result = a % b;
        cout << "Modulo is: " << result << endl;
        break;
    case '^':
        result = a;
        for (int i = 0; i < (b - 1); i++)
        {
            result *= a;
        }
        cout << "Power result is: " << result << endl;
        break;
    
    default:
        break;
    }
}