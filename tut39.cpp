//initilization list in constructor 
#include<iostream>
using namespace std;

//syntax for intilization list in constructor :
//constructor (argument-list) : initilization-section 
//{   
// assignmemt + other code;   
//}

/*class test{
    int a;
    int b;
    public:
     test(int i,int j):a(i),b(j){constructor body}
}
*/
class test{
    int a;
    int b;
    public:
    // test(int i,int j):a(i),b(j)
    // test(int i,int j):a(i),b(i+j)
     //test(int i,int j):a(i),b(2*j)
     test(int i,int j):a(i),b(a+j)
     {
            cout<<" constructor exceuted "<<endl;
            cout<<" the value of a is "<<a<<endl;
            cout<<" the value of b is "<<b<<endl;
     }
};     
int main(){
 test t(4,6);
return 0;
}