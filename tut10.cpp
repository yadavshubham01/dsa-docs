#include<iostream>
using namespace std;

//struct employee

    /* data */
   // int eId;
   // char favchar;
   // float salary;



union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
      // struct employee harry;
      // harry.eId = 1;
      // harry.favchar ='c';
      // harry.salary =12000000;
      // cout<< "the value is"<<harry.eId<<endl;
       //cout<< "the value is"<<harry.favchar<<endl;
       //cout<< "the value is"<<harry.salary<<endl;

    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car;
       
return 0;
}