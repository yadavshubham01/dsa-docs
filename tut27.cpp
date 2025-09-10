#include <iostream>
using namespace std;
 

class complex
{
    int a, b;

public:
    // creating a construtor
    complex(int x,int y);
    void printnumber()
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};
complex ::complex(int x, int y) // this is a parameterized constructor as it take 2 parameter
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    complex a(4, 6);
    // explicit call
    complex b = complex(5, 7);
    a.printnumber();
    b.printnumber();
    return 0;
}