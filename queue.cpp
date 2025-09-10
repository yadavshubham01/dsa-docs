
//queue
/*
#include<iostream>
#include<queue>
using namespace std;

int main(){
queue<string> q;
q.push("gogi");
q.push("sonu");
q.push("monu");

cout<<"first element "<<q.front()<<endl;
q.pop();
cout<<"first element "<<q.front()<<endl;

cout<<"size after pop" <<q.size()<<endl;
return 0;
}
*/
#include<iostream>
#include<queue>

using namespace std;

int main(){
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(0);
   int n = maxi.size();
    for(int i =0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

return 0;
}