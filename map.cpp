#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
#include <vector>
using namespace std;

int longestSubArray(vector<int> &arr){
  int n=arr.size();
  int sum=0;
  int ans=0;
  unordered_map<int,int> mp;
  for(int i=0; i<n; i++){
    sum=sum+arr[i];
    if(sum==0){
      int len =i+1;
      ans=max(ans,len);
    }
    if(mp.find(sum)!= mp.end()){
      int len=i-mp[sum];
      ans=max(ans,len);
    }
    else{
      mp[sum]=i;
    }
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  
  for(int i=0; i<n; i++){
    cin>>arr[i];

  }
  int ans=longestSubArray(arr);
  cout<<ans;
  

//   unordered_map<int,string> m;

//   m[1]= "babbar";
//   m[4]="love";
//   m[3]="kumar";

//   m.insert({5,"gogi"});

// cout<<"before erase"<<endl;
// for(auto i:m){
//     cout<<i.first <<" "<< i.second<<endl;
// }

//  m.erase(4);
//  cout<<"after erase"<<endl;
// for(auto i:m){
//     cout<<i.first <<" "<< i.second<<endl;
//  }

return 0;
}