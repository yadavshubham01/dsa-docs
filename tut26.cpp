#include<iostream>
using namespace std;


class complex{
     int a,b;
     public:
    // creating a construtor
    complex(void); 
    void printnumber(){
        cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;

    }
};  
    complex :: complex(void){
        a=12;
        b=5;
    }


int main(){
   complex c;
   c.printnumber();
return 0;
}