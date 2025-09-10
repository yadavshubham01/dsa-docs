#include<iostream>
using namespace std;

class TrieNode{
    public:

    char data;
    TrieNode* children[26];
    bool isTerimal; 

    TrieNode(char ch){
        data=ch;
        for(int i=0; i<26; i++){
            children[i]=NULL;
        }
        isTerimal=false;
    } 
};

class Trie{
    public:
    Trie(){
        root=new TrieNode('\0');  
    }
     TrieNode* root;
     void insertUtil(TrieNode* root,string word){
       //base case
       if(word.length() ==0){
         root->isTerimal=true;
       }
       
       //assume ,word will be capital
       int index =word[0]-'A';
       TrieNode* child;

       //present
       if(root->children[index] !=NULL){
        child =root->children[index];
       }else{
        //absent
        child =new TrieNode(word[0]);
        root->children[index]=child;
       }

         //recursion
       insertUtil(child,word.substr(1));
     }

     void insertWord(string word){
        insertUtil(root,word);
     }

     bool searchUtil(TrieNode* root,string word){
        //base case
        if(word.length()  ==0){
            return root->isTerimal;
        }

        int index =word[0]-'A';
        TrieNode* child;

        if(root->children[index] !=NULL){
          child =root->children[index];
       }else{
        return false;
       }

       return searchUtil(child,word.substr(1));
     }

     bool search(string word){
        return searchUtil(root,word);
     }
};

int main(){
   
Trie *t =new Trie();
t->insertWord("CAT");
t->insertWord("DOG");
t->insertWord("BAT");
t->insertWord("RAT");
t->insertWord("GATE");

cout<< "present or not " << t->search("BAT")<<endl;
return 0;
}