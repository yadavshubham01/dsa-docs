/*
#include<iostream>
using namespace std;
//binary search
int binarysearch(int arr[],int size,int key){

    int start = 0;
    int end = size-1;

    int mid = start+(end-start)/2;

    while (start<=end)
    {
        if(arr[mid] == key){
            return mid;
        }
        //go to right wala part
        if(key> arr[mid]){
            start = mid +1;
        }else{
            end=mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
    
}


int main(){
  int even[6] = {2,4,6,8,12,18};
  int odd[5] = {3,8,11,14,16};

  int evenindex =binarysearch(even,6,18);
  int oddindex =binarysearch(odd,5,3);
  cout<<"index of 18 is "<<evenindex<<endl;
  cout<<"index of 3 is "<<oddindex<<endl;
return 0;
}
*/
//solve by using recursion ---
#include<iostream>
using namespace std;
void print(int arr[] , int st, int e){
    for(int i=st; i<=e; i++){
        cout<< arr[i] <<" ";
    }cout<<endl;
}
bool BinarySearch(int arr[],int st,int e,int k){
    cout<<endl;
    print(arr,st,e);

    //base case
if(st>e)
return false;

int mid =st +(e-st)/2;

if(arr[mid] == k)
return true;


if(arr[mid]<k){
    return BinarySearch(arr,mid+1,e,k);
}else{
    return BinarySearch(arr,st,mid-1,k);
}

}

int main(){
int arr[6] ={1,4,7,8,9,13};
//int size = 6;
int key = 9;

bool ans = BinarySearch(arr,0,5,key);
cout<<"present or not "<<ans<<endl;
return 0;
}