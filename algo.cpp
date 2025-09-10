#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

 vector<int> v;
 v.push_back(1);
 v.push_back(3);
 v.push_back(6);
 v.push_back(7);

 cout<<binary_search(v.begin(),v.end(),5)<<endl;

rotate(v.begin(),v.begin()+1,v.end());
for(int i:v){
    cout<<"after rotate "<<i<<endl;
}
 string abcd = "abcd";
 reverse(abcd.begin(),abcd.end());
 cout<<"string-> "<<abcd<<endl;
return 0;
}