//pointer in c++

#include<iostream>
using namespace std;

class A{
    int a;
    public:
       //A& setdata(int a){
       void setdata(int a){
         this->a = a;
        // return *this;
       }
       void getdata(){
         cout<<"code of this item is "<<a<<endl;
       }
};
int main(){
//this is a keyword which is a pointer which points to the objects which invokes the member funtion 
 A a;
 a.setdata(4);
 a.getdata();
return 0;
}