#include<iostream>
using namespace std;

inline int product(int a,int b){
   // static int c=0;
 //   c=c+1;
    return a*b;
}
float moneyreceived(int currentmoney, float factor=1.04){
    return currentmoney * factor;
}


int main(){
    int a,b;
          cout<<"enter the value of a and b"<<endl;
          cin>>a>>b;
          int money =100000;
          cout<<"if you have"<<money<<"rs in your bank account, you will receive"<<moneyreceived(money)<<"rs after 1 year"<<endl;
          cout<<" for VIP if you have"<<money<<"rs in your bank account, you will receive"<<moneyreceived(money,1.1)<<"rs after 1 year"<<endl;
          
          


return 0;
}