#include<iostream>
using namespace std;

//inline int getMax(int& a, int& b){
  //  return (a>b) ? a : b;
//}
//default argument 
void print(int arr[], int n, int start=0){
    for(int i =start; i<n; i++){
        cout<< arr[i] << endl;
    }
}
int main(){
/*
 int a=1,b = 2;
 int ans =0;

 ans = getMax(a,b);
 cout<<ans <<endl;

  a =a+ 3;
  b= b+2;

  ans = getMax(a,b);
  cout << ans <<endl;
  */ 

 int arr[5] = {1,2,34,44,65};
 int size =5;

 print(arr, size);
 cout<<endl;
 print(arr,size,2);
return 0;
}