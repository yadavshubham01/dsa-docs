#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
      this->data=data;
      this->next=NULL;
    }

};
void print(Node* &head){
    Node* temp  = head;
   cout<<temp->data<<" ";
   temp=temp->next;
    while (temp != head){
    cout << temp -> data<<" ";
    temp = temp -> next;
    }cout<< endl;
}

Node* insertAthead(Node* head,int data){
    // Node* temp=new Node*(x);
    //                                                //O(n)
    // temp->next=head;                              //5, 10 ,20 ,30 ,40
    // Node* curr=head;
    // while(curr->next !=head){ 
    //     curr=curr->next;
    // }
    // curr->next=temp;
    // return temp;
    // Node* temp=head;
    // Node* curr=temp->next;
    // temp->next=new Node(data);
    // temp->next->next=curr;
    // swap(head->data,temp->data);
    // return head;


    Node* newNode=new Node(data);
    newNode->next=head->next;
    head->next=newNode;

    swap(head->data,newNode->data);
    return head;

}
int main(){
    Node* head=new Node(10);
    Node* temp1=new Node(20);
    Node* temp2=new Node(30);
    Node* temp3=new Node(40);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=head;

    print(head); 
    head=insertAthead(head,12);
    print(head);
}