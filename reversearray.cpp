/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0, e =v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    int n = v.size();
    for(int i =0; i <n; i++){
        cout<< v[i] <<" ";
    }
    cout<<endl;
}

int main(){

  vector<int> v;

  v.push_back(11);
  v.push_back(7);
  v.push_back(3);
  v.push_back(12);
  v.push_back(4);

  vector<int> ans = reverse(v);
  print(ans);
return 0;
}
*/
//by recursion
#include<iostream>
using namespace std;

void reverse(string& str,int i,int j ){
    if(i>j)
    return ;

    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}
int main(){
  string name ="babber" ;
 
  reverse(name,0,name.length()-1);
  cout<<name<<endl;

return 0;
}