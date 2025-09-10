/*inhertiance*/

#include <iostream>
using namespace std;

class employee
{
    public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    employee() {}
};

class programmer : employee
{
public:
    programmer(int inpId)
    {
        id = inpId;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id<<endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(10);
    cout << skillf.languagecode << endl;
    skillf.getdata();
    return 0;
}