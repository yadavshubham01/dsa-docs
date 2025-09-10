#include<iostream>
using namespace std;
/*
int& func(int a){ //bad praticse for use so dont use this type
    int num =a;
    int& ans = num;
    return ans;
}
*/

void update(int& m){
    m++;
}

int main(){

    int n =5;
    cout<<"Before :" << n <<endl;
    update(n);
    cout<<"Before :" << n <<endl;

   // func(n);
/*
 int i =5;
 //create a ref variable

 int& j=i;

 cout<< i <<endl;
 i++;
 cout<< i <<endl;
 j++;
 cout<< j <<endl;
 */
return 0;
}