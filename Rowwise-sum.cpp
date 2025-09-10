#include<iostream>
using namespace std;

/**
void printSum(int arr[][3],int row,int col){
    
    for(row =0; row<3; row++){
        int sum = 0;
    for(col=0; col<3; col++){
        sum += arr[row][col];
    }
    cout<<sum<<" ";
}
}
*/
int largestRowsum(int arr[][3],int row,int col){
    int maxi =INT16_MIN;
    int rowIndex =-1;
     for(row =0; row<3; row++){
        int sum = 0;
    for(col=0; col<3; col++){
        sum += arr[row][col];
    }
    if(sum > maxi){
        maxi =sum;
        rowIndex = row;
    }
}
cout<<"the maximun sum is "<<maxi<<endl;
return rowIndex;
}

int main(){
int arr[3][3];

cout<<"enter the elements"<<endl;
 for(int row =0; row<3; row++){
    for(int col=0; col<3; col++){
        cin>>arr[row][col];
    }
}
//printSum(arr,3,3);
cout<<"Max row is at index "<<largestRowsum(arr,3,3)<<endl;
return 0;
}