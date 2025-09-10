#include<iostream>
using namespace std;

void printarray(int arr[],int size){

    cout<<"printing the array "<<endl;
    for(int i =0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout<<" printing Done " <<endl;
 }


int main(){
    /*
int number[15];
cout<<"value at 0 index "<<number[1]<<endl;
cout<<endl<<" everything is fine" <<endl;
*/

int third[15]={5,7,11};

int n=15;
//cout<<" printing the array "<<endl;

for (int i =0; i<n; i++) {
    cout << third[i] <<" ";
}


int fourth[10] = {1};

n=10;
//cout<<" printing the array "<<endl;

for (int i =0; i<n; i++) {
    cout << fourth[i] <<" ";
}

char ch[5]= {'a','b','c','r','p'};
cout << ch[3] <<endl;
 
 cout<<"printing the array "<<endl;
    for(int i =0; i<5; i++){
        cout << ch[i] <<" ";
    }
    cout<<" printing Done " <<endl;


return 0;
}