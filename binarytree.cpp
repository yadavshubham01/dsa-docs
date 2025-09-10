#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
     int data;
     node* left;
     node* right;

  node(int d){
    this->data = d;
    this->left=NULL;
    this->right=NULL;
  }   
};

node* buildTree(node* root){
    cout<<"Enter the data: " <<endl;
    int data;
    cin>> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left" <<endl;
    root->left =buildTree(root->left);
      cout<<"Enter data for inserting in right" <<endl;
    root->right =buildTree(root->right);
    return root;

}



void levelOrderTranversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp =q.front();
        q.pop();
           
         if(temp== NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
         } 
         else{
        cout<<temp ->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
     }
    }
}

void inorder(node* root){
    //base case
    if(root == NULL)
    return ;

    inorder(root->left);     //L
    cout<<root->data <<" ";  //N
    inorder(root->right);    // R
}

void preorder(node* root){
    //base case
    if(root == NULL)
    return ;

         //L
    cout<<root->data <<" "; 
    preorder(root->left); //N
    preorder(root->right);    // R
}

void postorder(node* root){
    //base case
    if(root == NULL)
    return ;

         //L
    
    postorder(root->left); //N
    postorder(root->right);    // R
    cout<<root->data <<" "; 
}

int main(){
//1 2 7 -1 11 -1 -1 5 12 -1 -1 -1
  node* root=NULL;

  root = buildTree(root);
  cout<<"printing the level order traclesal output " <<endl;
  levelOrderTranversal(root);
  

return 0;
}