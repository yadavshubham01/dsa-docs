#include<iostream>
using namespace std;
/*
void reverse(string& str,int i ){
    
    if(i>j)
    return ;
    
    int n =str.length()-1;
    swap(str[i],str[(n-i-1)]);
    i++;
     
    reverse(str,i);
}
int main(){
string name ="babber" ;
 
  reverse(name,0);
  cout<<name<<endl;
return 0;
}
*/
bool checkPalindrome(string str, int i){
   
   //base case
   if(i >str.length()-1)
   return true;

   if(str[i] != str[str.length()-1]){
   return false;
   }
   else{
    return checkPalindrome(str,i+1);
   }
}

int main() {
    string name = "abcde";
    cout<<endl;

    bool isPalindrome =checkPalindrome(name ,0);

    if(isPalindrome){
        cout<< "its a palindrome "<<endl;
    }else{
        cout<<"its not a palindrome "<<endl;
    }
    return 0;
}