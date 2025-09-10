#include<iostream>
#include<map>

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

void print(Node* tail){
    Node* temp  = tail;

    if(tail == NULL){
        cout<< "List is empty" <<endl;
        return;
    }
    //cout << tail -> data<<" ";

    do{
    cout << tail -> data<<" ";
    tail = tail -> next;
}while (tail != temp);
cout<<endl;
}

void insertNode(Node* &tail,int element,int d){

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode-> next=newNode;
    }else{
        //non empty list
        //assuming that the element is present in the list

        Node* curr = tail;
        while(curr -> data != element){
            curr = curr->next;
        }

        //element found -> curr is representing element node
        Node* temp =new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(Node* &tail,int value){
    if(tail == NULL){
        cout<<"list is empty "<<endl;
        return;
    }else{
        //non empty and assumeing that "value" is present in linked list
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr -> data != value){
            prev = curr;
            curr = curr ->next;
        }

        prev ->next = curr-> next;
        //for 1 node in linked list
        if(curr == prev){
            tail = NULL;
        }
        else if(tail == curr){
            tail = prev;
        }
        curr-> next = NULL;
        delete curr;
    }
}

bool isCircularList(Node* head){
    if(head == NULL){
        return false;
    }
    Node* temp = head -> next;
    while(temp != NULL && temp != head ){
         temp = temp -> next;
    }

    if(temp == head){
        return true;
    }
    return false;
}

bool detectloop(Node* head){
    if(head == Null)
    return false;
    map<Node*,bool> visited;

    Node* temp =head;
    while(temp != NULL){
        //cycle is present 
        if(visited[temp] == true){
            return 1;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node* head){

    if(head == NULL)
    return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast  = fast ->next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow ->next;
        if(slow == fast){
            cout<<"present on node is"<< slow->data <<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getstartingNode(Node* head){
    if(head == NULL){
        return NULL;   
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

void removeLoop(Node* head){
     if(head == NULL){
        return NULL;   
    }
    
    Node* startOfLoop = getstartingNode(head);
    Node* temp = startOfLoop;

    while (temp -> next != startOfLoop)
    {
        temp = temp->next;
    }
    temp -> next = NULL;
}

int main(){
Node* tail = NULL;
//Node* node1 = new Node(10);
insertNode(tail,5,3);
print(tail);

insertNode(tail,3,5);
print(tail);
insertNode(tail,3,4);
print(tail);
insertNode(tail,5,7);
print(tail);

//deleteNode(tail,3); 
//print(tail);
if(isCircularList(tail)){
    cout << "linkead list is circular"<<endl;
}else{
    cout<<"linked list is not circular"<<endl;
}
return 0;
}