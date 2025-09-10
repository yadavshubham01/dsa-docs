#include<iostream>
using namespace std;

class Node {
    public:
    int data ; 
    Node* prev;
    Node* next;
   //constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node data "<<val <<endl;
    }
};

void print(Node* head){
    Node* temp  = head;

    while (temp != NULL){
    cout << temp -> data<<" ";
    temp = temp -> next;
}cout<< endl;
}
int getLength(Node* head){
    int len =0;
    Node* temp  = head;

    while (temp != NULL){
    len++;
    temp = temp -> next;
}
return len;
}
//inserting at starting---
void InsertAtHead(Node* &tail,Node* &head, int d){
   //empty list
   if(head == NULL){
     Node* temp =new Node(d);
     tail = temp;
     head=temp;
   }
   
    else{
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev =temp;
    head = temp;
    }
}
//innsering at back or tail
void InsertAtTail(Node* &tail,Node* &head ,int d){
    //empty list
   if(tail == NULL){
     Node* temp =new Node(d);
     tail=temp;
     head = temp;
   }else{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail->prev = temp;
    tail = temp;
   }
}

void InsertAtPostion(Node* &tail,Node* &head,int position, int d){
  //insert at start
  if(position == 1){
    InsertAtHead(tail,head,d);
    return;
  }
   

   Node* temp = head;
   int cnt =1;
   while(cnt < position-1){
     temp = temp->next; 
     cnt++;
   }
   //insert in last 
   if(temp -> next ==NULL){
    InsertAtTail(tail,head,d);
   }
   Node* nodetoinsert = new Node(d);
   nodetoinsert -> next = temp -> next;
   nodetoinsert -> next -> prev = nodetoinsert;
   temp -> next =  nodetoinsert;
  nodetoinsert ->prev= temp;
}

void deleteNode(int position, Node* &head){
   //deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp-> next -> prev = NULL;
        head = temp -> next; 
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr ->next;
            cnt++;
        }

        curr -> prev=NULL;
        prev -> next = curr ->next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
//Node* node1 = new Node(10);
Node* head = NULL;
Node* tail = NULL;
print(head);
cout<< getLength(head)<<endl;
InsertAtHead(tail,head,12);
print(head);
InsertAtTail(tail,head,15);
print(head);
InsertAtPostion(tail,head,2,22);
print(head);
InsertAtPostion(tail,head,1,14);
print(head);

deleteNode(2,head);
print(head);

return 0;
}