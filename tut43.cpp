// polymorphism 
/* -one name and mutliple forms
  -eg function overloading,operator overloading 
  -eg virtual funtion 
*/

#include<iostream>
using namespace std;
// function overloadings
class A{
  public:
  void sayHello(){
    cout<<"hello folks"<<endl;
  }
  void sayHello(string name){
    cout<<"hello folks"<<name<<endl;
  }
  
  
};

class B{
  public:
  int a,b;

  public:
  int add(){
    return a+b;
  }
  //operator overloading
  void operator+ (B &obj){
    int value1 = this -> a;
    int value2 = obj.a;
    cout<<"output"<<value2 - value1 <<endl; 
  }

};
int main(){
    B obj1,obj2;
   // obj.sayHello(); 
    obj1.a =4;
    obj2.a =7;

    obj1 + obj2;
return 0;
}