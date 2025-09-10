#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

   unordered_map<string,int> m;

  //insertion 
  pair<string,int> p=make_pair("babber",3);
  m.insert(p);

  //2
  pair<string,int> pair2("love", 2);
  m.insert(pair2);

  //3 
  m["mera"]=1;  
 
  
 //searching
 cout<<m["mera"]<<endl;
 //cout<<m.at[3]<<endl;

//size
cout<<m.size() <<endl;

//to check presence
cout<< m.count("love");

//iterator

unordered_map<string,int> :: iterator it =m.begin();

while(it != m.end()){
    cout<<it->first <<" "<< it->second <<endl;
    it++;
}
 
return 0;
}