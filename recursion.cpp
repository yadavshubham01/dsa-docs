#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int i, int j){
    if(i>j)return true;
    return (s[i] == s[j] && isPalindrome(s,i+1,j-1));
}

int main(){
    string s="aabbbbaa";
    cout<<isPalindrome(s,0,s.length()-1);
}