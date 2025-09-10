#include<iostream>
using namespace std;

class Node {
    public:
    int data ; 
    Node* next;
   //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        //int value  = this ->data;
        if(this ->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void InsertAtHead(Node* &head, int d){
    if(head == NULL){
        cout<<"list is empty "<<endl;
        return ;
    }
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}


void print(Node* &head){
    Node* temp  = head;

    while (temp != NULL){
    cout << temp -> data<<" ";
    temp = temp -> next;
}cout<< endl;
}

void InsertAtPostion(Node* &tail,Node* &head,int position, int d){
  
  //insert at start
  if(position == 1){
    InsertAtHead(head,d);
    return;
  }
   Node* temp = head;
   int cnt =1;
   while(cnt < position-1){
     temp = temp->next;
     cnt++;
   }

   Node* nodetoinsert = new Node(d);
   nodetoinsert -> next = temp -> next;
   temp -> next =  nodetoinsert;
}

void deleteNode(int position, Node* &head){
   //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
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
        prev -> next = curr ->next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){

Node* node1 = new Node(10);
//cout << node1 -> data << endl;
//cout << node1 -> next << endl;

Node* head = node1;
Node* tail = node1;
print(head);
InsertAtTail(tail,12);
//InsertAtHead(head,12);
print(head);
InsertAtTail(tail,15);
print(head);
InsertAtPostion(tail,head,4,22);
print(head);

deleteNode(1,head);
print(head);

return 0;
} 