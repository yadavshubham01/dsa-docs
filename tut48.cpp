#include<iostream>
using namespace std;

int main(){
  int a= 4;
  int b = 6;

  cout<<" a&b "<<(a&b)<<endl;
  cout<<" a|b "<<(a|b)<<endl;
  cout<<" ~a "<<(~a)<<endl;
  cout<<" a^b "<<(a^b)<<endl;


  //left or right shift 
  cout<<" a^b "<<(17>>1)<<endl;
  cout<<" a^b "<<(17>>2)<<endl;
  cout<<" a^b "<<(21<<2)<<endl;
  cout<<" a^b "<<(19<<1)<<endl;
return 0;
/*
int i ,j =1;
i= 10;
if (++i)
 cout<<j;
 else
 cout<<++j;
*/
}