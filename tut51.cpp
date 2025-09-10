#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n;
cin>>n;

//patter printing 
  for(int i=0; i<n; i++){
    for(int j=0; j<n-1; j++){
        cout<<"*"<<' ';
    }
    cout<<endl;
  }
/*
int i =0, ans = 0;
while(n != 0){
    //int bit = n&1;
    int digit = n%10;

    if(digit == 1){
       ans = ans + pow(2, i);
    }
    n = n/10;
    i++;
}
cout<<ans <<endl;

*/

return 0;
}