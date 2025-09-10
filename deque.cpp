//deque = in this we can insert or delete element from front or back both side.
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i: d){
        cout<<i<<" ";
    }
   /* d.pop_back();
   cout<<endl;
   for(int i: d){
    cout<<i<<" ";
   }
   */
  d.erase(d.begin() , d.begin()+1);
  cout<<"after erase " <<d.size() <<endl;
  for(int i:d){
    cout<<i<<endl;
  }
return 0;
}