#include<iostream>
using namespace std;
/*
bool isSorted(int arr[],int size){
    if(size ==0 || size == 1)
    return true;

    if(arr[0]> arr[1]){
        return false;
    }else{
        return isSorted(arr+1,size-1);
    }
}
*/
bool Search(int arr[],int size,int k){
    if(size ==0)
    return false;

    if(arr[0]==k){
        return true;
    }else{
        return Search(arr+1,size-1,k);
    }
}
int main(){
int arr[5] = {2,4,5,8,9};
int size =5;
int key =2;

//bool ans = isSorted(arr,size);
bool ans = Search(arr,size,key);
cout<< "answer is "<<ans<<endl;
return 0;
}