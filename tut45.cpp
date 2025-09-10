#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
 //char ch = 'A';

int i =1;
while (i<= n)
{
    int j =1;
   // while (j<=n)
  // char start = 'A'+ n-i;
   char start = 'A'+ i-1;
  //  while (j<=i)
    while (j<=n)
    {
        //char ch = 'A' + i -1; //main point
       // char ch = 'A' + j -1; //main point
       //char ch = 'A'+i +j-2;
       //char ch = 'A'+i-1;
       //char ch = 'A'+i+j-2;
       // cout<<ch<<" ";
        cout<<start<<" ";
        start = start+1;
      //  ch = ch + 1;
        j = j+1;
    }
    cout<<endl;
    i = i +1; 
    
}

return 0;
}