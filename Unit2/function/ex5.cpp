#include<iostream>

using namespace std;

void operation(int a, int b, char c);

int main()
{
    int a, b;
    char op;
    cout << "Choice for (+, -, *, /, ^): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    operation(a, b, op);
    return 0;
}

void operation(int a, int b, char c)
{
    float result = 0;
    switch (c)
    {
    case '+':
        result = (float)a + b;
        cout << "+ is: " << result << endl;
        break;
    case '-':
        result = (float)a - b;
        cout << "- is: " << result << endl;
        break;
    case 'x':
        result = (float)a * b;
        cout << "* is: " << result << endl;
        break;
    case '/':
        result = (float)a / b;
        cout << "/ is: " << result << endl;
        break;
    case '^':
        result = a;
        for (int i = 0; i < (b - 1); i++)
        {
            result *= (float)a;
        }
        cout << "^ is: " << result << endl;
        break;
    
    default:
        break;
    }
}