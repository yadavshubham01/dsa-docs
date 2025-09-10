#include<iostream>
using namespace std;

class employee {
    int id;
    int salary;
    public:
    void setid(void){
        salary=122;
        cout<<"enter the id of employee"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"the id of this employee is "<<id<<endl;
    }
};

int main(){
 // array of objects::
 employee fb[5];
 for (int i = 0; i <5; i++)
 {
    fb[i].setid();
    fb[i].getid();
 }
 
return 0;
}