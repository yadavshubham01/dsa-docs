#include<iostream>
using namespace std;

inline int product(int a,int b){
    static int c=0;
    c=c+1;
    return a*b+c;
}



int main(){
    int a,b;
          cout<<"enter the value of a and b";
          cin>>a>>b;
          cout<<"the product of a and b is"<<product(a,b);
          cout<<"the product of a and b is"<<product(a,b);
          cout<<"the product of a and b is"<<product(a,b);
          cout<<"the product of a and b is"<<product(a,b);
          cout<<"the product of a and b is"<<product(a,b);
          cout<<"the product of a and b is"<<product(a,b);
          cout<<"the product of a and b is"<<product(a,b);
          cout<<"the product of a and b is"<<product(a,b);
          cout<<"the product of a and b is"<<product(a,b);

return 0;
}