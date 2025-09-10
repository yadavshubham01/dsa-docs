#include<iostream>
using namespace std;
/*
int factorial(int n){
    //base case
    if(n == 0)
    return 1;

   // int choti = factorial(n-1);
    //int badi = n* choti;

    return n * factorial(n-1);
}
*/
void print(int n){
    if(n == 0){
    return ;
}
cout << n <<endl;
print(n-1);
}
/*
int power(int n){
    if(n == 0)
    return 1;

    return 2 * power(n-1);
}
*/

int main(){
int n;
cin >> n;

//int ans = factorial(n);
//int ans = power(n);
 print(n);
//cout<< ans <<endl;
return 0;
}