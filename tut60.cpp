#include<iostream>
using namespace std;
//fibonacci series
int fib(int n){
    int a = 0;
    int b = 1;
    for(int i=0; i<=n; i++){
        int next = a+b;
        a=b;
        b=next;
    }
    return b;
}
int main(){
int n;
cin>>n;

cout<<"the "<<n<<" the term of the series is = "<<fib(n)<<endl;
return 0;
}