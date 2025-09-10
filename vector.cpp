//c++ in STL
//array
/*
#include<iostream>
#include<array>
using namespace std;

int main(){
  
 // int basic[3];

  array<int,4> a ={1,4,6,7};

  int size = a.size();

  for(int i= 0; i<size; i++){
    cout<<a[i]<<endl;
  }

  cout<<"Element at 2nd Index -> "<<a.at(2)<<endl;
  cout<<"Empty or not -> "<<a.empty()<<endl;

return 0;
}
*/
//vector
#include<iostream>
#include<vector>
using namespace std;

int main(){


 vector<int> v;
 cout<<"size -> "<<v.capacity()<<endl;

 v.push_back(1);
 cout<<"size -> "<<v.capacity()<<endl;
 v.push_back(2);
 cout<<"size -> "<<v.capacity()<<endl;
 v.push_back(3);
 cout<<"size -> "<<v.capacity()<<endl;

 cout<<"before pop "<<endl;
 for(int i:v) {
    cout<<i<<" ";
 }cout<<endl;

 v.pop_back();

 cout<<"after pop"<<endl;
 for(int i:v){
    cout<<i<<" ";
 }

 
return 0;
}