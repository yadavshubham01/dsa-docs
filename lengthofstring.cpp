#include<iostream>
using namespace std;
//reverse the string
void reverse(char name[],int n){
    int s = 0, e =n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){

 char name[20];

 cout<<"enter your name "<<endl;
 cin >> name;
 int let= getlength(name);
 cout<<"length: "<<let<<endl;
 reverse(name,let);
 cout<<"Your name is ";
 cout<< name <<endl;
return 0;
}