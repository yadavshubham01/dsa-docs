#include<iostream>
#include<queue>
using namespace std;

int main(){

queue<int> q;
/*
q.push(11);
q.push(15);
q.push(16);
q.push(18);

cout<<"size of q " <<q.size() <<endl;

q.pop();
cout<< q.front();
*/

//doubly queue
deque<int> d;

d.push_front(12);
d.push_back(14);

cout<<d.front() <<endl;
cout<<d.back() <<endl;

d.pop_front();
cout<<d.front() <<endl;
cout<<d.back() <<endl;
d.pop_back();

return 0;
}