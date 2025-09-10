//find the sum of max and mun of k size window of array
#include<iostream>
#include<queue>
using namespace std;

int solve(int *arr,int n,int k){
    deque<int> maxi(k);
    deque<int> mimi(k);

    for(int i=0; i<k; i++){
        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
        maxi.pop_back();

        while(!mimi.empty() && arr[mimi.back()] >= arr[i])
        mimi.pop_back();

        maxi.push_back(i);
        mimi.push_back(i);
    }
     
     int ans = 0;
    for(int i =k; i<n; i++){
         ans += arr[maxi.front()] + arr[mimi.front()];


         //removal
         while(!maxi.empty() && i-maxi.front() >=k){
            maxi.pop_front();
         }

         while(!mimi.empty() && i-mimi.front() >=k){
            mimi.pop_front();
         }

         //addition
         while(!maxi.empty() && arr[maxi.back()] <= arr[i])
        maxi.pop_back();

        while(!mimi.empty() && arr[mimi.back()] >= arr[i])
        mimi.pop_back();

        maxi.push_back(i);
        mimi.push_back(i);
        
    }

    //make sure to consider last wali window
     ans += arr[maxi.front()] + arr[mimi.front()];
     return ans;
}
int main(){

int arr[7]={2,-5,-1,7,-3,-1,-2};
int k=4;
cout<<solve(arr,7,k)<<endl;
return 0;
}