//set = this every element is unique.no modification and get element in sorted order.
#include<iostream>
#include<set>
#include<unordered_set>
#include<vector>
using namespace std;


void find_unqiue(vector<int> &arr){
    int n=arr.size();
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    cout<<s.size()<<endl;
    for(auto it:s)cout<< it<<" ";
}
int main(){
// set<int> s;
// s.insert(5);
// s.insert(5);
// s.insert(1);
// s.insert(6);
// s.insert(0);
// s.insert(0);
// s.insert(2);
// for(auto i : s){
//     cout<<i<<endl;               
// }

// set<int>::iterator it = s.begin();
// it++;

// s.erase(it);

// for(auto i : s){
//     cout<<i<<endl;
// }

// cout<<"-5 is present or not ->"<<s.count(-5)<<endl;

// set<int>::iterator itr = s.find(5);

// for(auto it= itr; it!=s.end(); it++){
//     cout<<*it<<" ";
// }

// 
vector<int> arr={1,2,3,2,3,4};
find_unqiue(arr);

return 0;
}