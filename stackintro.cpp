#include<iostream>
#include<stack>
using namespace std;
/*
class Stack{
    public:
    int *arr;
    int top;
     int size;
     
     Stack(int size){
        this->size =size;
        arr = new int[size];
        top =-1;
     }

     void push(int element){
       if(size -top >1){
        top++;
        arr[top] = element;
       }else{
        cout<<"stack  overflow"<<endl;
       }
     }

     void pop(){
        if(top >=0){
            top--;
        }else{
        cout<<"stack  overflow"<<endl;
       }

     }
     int peak(){
        if(top >= 0){
        return arr[top];
        }else{
        cout<<"stack  overflow"<<endl;
        return -1;
       }
     }
     bool isEmpty(){
       if(top == -1){
        return true;
        }else{
        cout<<"stack is not empty "<<endl;
        return false;
       }
     }
};
*/
//stack using linked list 
class Node {
    public:
    int data ; 
    Node* next;
   //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

class Stack{
   public:
   Node* head;
   int size;

   Stack(int size){
        this->size =size;
        this->head = NULL;
     }

     void push(int data){
      int cnt=0;
      Node* temp= head;
      while(temp != NULL){
         temp = temp->next;
         cnt++;
      }
      if(cnt <size){
         Node* newNode =new Node(data);
         if(head == NULL){
            head = newNode;
            return ;
         }else{
            newNode->next =head;
            head = newNode;
         }
      }
      else
       {
         cout<<"stack overflow"<<endl;
         }
     }
     void peak(){
        if(head==NULL) {
        cout<<"stack is empty"<<endl;
        }
        else{
            cout<<head->data<<endl;
        }
    }

    void pop(){
        if(head==NULL) {
         cout<<"Stack underflow"<<endl;
        }
        else{
            Node* temp = head;
            cout<<"poped element is: "<<temp->data<<endl;
            head = head->next;
            delete temp;
        }
    }
    bool isEmpty(){
        if(head==NULL) return true;
        else return false;
    }
};
int main(){
/*
//creation 
stack<int> s;
s.push(2);
s.push(3);
s.push(8);

s.pop();

cout<<"print the top element " <<s.top();

*/
Stack st(5);
 
 st.push(22);
 st.push(33);
 st.push(44);
  
 st.peak();
 st.pop();
st.peak();
 st.pop();
 st.peak();
 st.pop();

 if(st.isEmpty()){
    cout<<"stack is empty "<<endl;
 }else{
    cout<<"stack is not empty "<<endl;
 }

return 0;
}