#include<iostream>
using namespace std;
int setbitA(int a){
    int count =0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a = a>>1;
    }
    return count;
}
int setbitB(int b){
    int count =0;
    while(b!=0){
        if(b&1){
            count++;
        }
        b = b>>1;
    }
    return count;
}
int main(){

int a,b;
cin>>a >>b;
int add1=setbitA(a);
int add2 =setbitB(b);
int ans = add1 + add2;
cout<<"total no of setbit is "<<ans<<endl;

return 0;
}