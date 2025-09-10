#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is" << id << "and this is employee number " << count << endl;
    }
};

int employee::count;

int main()
{
    employee harry,rohan,yug;
    harry.setdata();
    harry.getdata();

    rohan.setdata();
    rohan.getdata();

    yug.setdata();
    yug.getdata();
    return 0;
}