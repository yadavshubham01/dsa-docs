#include<iostream>
using namespace std;
  
int sum(int arr[],int n){
    int sum =0;
   for(int i = 0; i<n; i++){
      sum+=arr[i];
   }
   return sum;
}

int main(){

int arr[5]={1,2,3,4,5};
cout<<" sum of the all elememts of array is "<<sum(arr,5)<<endl;
return 0;
}