//find the same number of occurence in array in first and last 
#include<iostream>
using namespace std;
int firstoccur(int arr[],int n,int k){

    int s =0,e =n-1;
    int mid = s+(e-s)/2;
int ans =-1;
    while(s<=e){

        if(arr[mid]==k){
            ans = mid;
            e = mid -1;
        }
        else if(k > arr[mid])
        {
            s=mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastoccur(int arr[],int n,int k){

    int s =0,e =n-1;
    int mid = s+(e-s)/2;
int ans =-1;
    while(s<=e){

        if(arr[mid]==k){
            ans = mid;
            s = mid +1;
        }
        else if(k > arr[mid])
        {
            s=mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
int even[5]={1,2,3,3,5};
cout<<"First Occurence of number is "<< firstoccur(even,5,3)<<endl;
cout<<"Last Occurence of number is "<< lastoccur(even,5,3)<<endl;
return 0;
}