#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int i=1;

while (i<=n)
{
    //int space =n-i;
    int space =i-1;
    while (space)
    {
        cout<<" ";
        space = space-1;
    }

    //start print karlo
    int j=1;
   // while (j <= n-i+1)
    while (j <= i)
    {
        cout<<"*";
        j = j + 1;
    }cout<<endl;
    i = i + 1;
    
    
}

return 0;
}