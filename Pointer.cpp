#include<iostream>
using namespace std;

int main(){
    /*
    int num=5;
    cout<<num <<endl;

    //address of Operator -&
    int *ptr = &num;
    cout<<"THE Value is : "<<*ptr << endl;
    cout<<"THE address  is : "<<ptr << endl;
    cout<<"Size of integer is "<< sizeof(num)<<endl;
    cout<<"Size of pointer is "<< sizeof(ptr)<<endl;


    int i=5;

    int *p =0;
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;
    */

   int num =5;
   int a = num;
   a++;

   cout <<num <<endl;
   
   int *p = &num;
    cout <<num <<endl;
   (*p)++;
    cout <<num <<endl;
    //copying a pointer 
    int *q =p;
     cout <<p <<" - "<<q<< endl;
     cout <<*p <<" - "<<*q<< endl;

     //important concept
      int i =3;
     int *t =&i;
     //cout<< (*t)++ <<endl;
     *t =*t+1;
      cout <<*t <<endl;
      cout<< "Before t "<<t << endl;

      t=t+1;
       cout <<t<<endl;
return 0;
}