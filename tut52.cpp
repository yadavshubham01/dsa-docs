#include <iostream>
using namespace std;
//mini calculator 
int main()
{
    int a, b;
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;

    char op;
    cout << "enter the operation you want to perform " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;

    default:
        cout << "please enter a valid operation" << endl;
    }

    return 0;
}