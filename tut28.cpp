#include<iostream>
using namespace std;

class point{
    int a,b;
    public:
    point(int x,int y){
        a=x;
        b=y;
    }
    void displaypoint(){
        cout<<"the point is( "<<a<<","<<b<<endl;
    }
};
int main(){
    point p(1,1);
    p.displaypoint();

    point q(4,6);
    q.displaypoint();

return 0;
}