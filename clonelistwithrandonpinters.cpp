//apporch
/*
1 create a clone list 
2 clone node add in between original list
3 random pionter 

 temp ->next = temp ->random ->next;

4 revert changes done in step 2
5 return cloneHead;
code

class sol{
    private:
    void insertAtTail(Node* &head,Node* &tail,int d){
       Node* newNode = new Node(d);
       if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
       }
       else{
        tail->next = newNode;
        tail = newNode;
       }
    }
    public:
    Node* copList(Node* head){
    //step 1
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;
    while(temp !=NULL){
        insertAtTail(cloneHead,cloneTail,trmp->data);
        temp = temp->next;
    }
   //step2
    Node* originalHead = head;
    Node* cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL){
        Node* next = originalNode -> next;
        original->next = cloneNode;
        originalNode = next;

        next =cloneNode ->next;
        cloneNode ->next = originalNode;
        cloneNode = next;
    }
    //step 3
     temp = head; 
    while(temp !=NULL){
        if(temp->next != NULL){
        if(temp->random != NULL){
        temp->next->random = temp -random->next
        }else{
            temp->next =temp ->random;
        }
      }
      temp = temp->next->next;
    }
   //step 4
   originalHead = head;
   cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL){
        original->next = cloneNode->next;
        originalNode = originalNode ->next;
          if(originalNode != NULL){
        cloneNode ->next =  originalNode ->next;
        }
        cloneNode = cloneNode->next;
    }

    //step 5
    return clonHead;
 }
};
*/
