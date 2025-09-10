#include<iostream>
using namespace std;

int main(){
         int marks[] ={32,34,32,43};
         int i;
        // int mathmarks[4];
        // mathmarks[0]=342;
         //mathmarks[1]=768;
         //mathmarks[2]=568;
         //mathmarks[3]=438;
         //cout<<"these are marks "<<endl;
         //cout<<mathmarks[0]<<endl;
         //cout<<mathmarks[1]<<endl;
        // cout<<mathmarks[2]<<endl;
        // cout<<mathmarks[3]<<endl;
    
        // cout<<"these are marks "<<endl;

       while (i <4)
       {
        cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
        i++;
        
       } 
       int*p = marks;
       cout<<"the value of marks[0] is "<<*p<<endl; 
       cout<<"the value of marks[0] is "<<*(p+1)<<endl; 
       cout<<"the value of marks[0] is "<<*(p+2)<<endl; 
       cout<<"the value of marks[0] is "<<*(p+3)<<endl; 
       
       
return 0;
}