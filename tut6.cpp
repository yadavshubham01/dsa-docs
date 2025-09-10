#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"tell your age"<<endl;    
    cin>>age;
     switch (age)
    {
    case 18:
    cout<<"you are 18"<<endl;
        break;
    case 22:
   cout<<"you are 22"<<endl; 
    break;
    case 20:   
    cout<<"you are 20"<<endl;
    break;    
    
    default:
    cout<<"no upated"<<endl;
        break;
    }
    

    return 0;
}