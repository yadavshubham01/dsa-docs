//list =double linked list 
#include<iostream>
//#include<list>
#include<stack>
using namespace std;

int main(){
    /*
list<int> l;
list<int> n(5,10);
for(int i: n){
    cout<<i<<" ";
}

l.push_back(1);
l.push_front(2);
*/
//stack

stack<string> s;
s.push("gogi");
s.push("sonu");
s.push("monu");
cout<<"top element ->" <<s.top()<<endl;

s.pop();
cout<<"size of stack "<<s.size()<<endl;
//cout<<"size of stack "<<s.swap()<<endl;


return 0;
}