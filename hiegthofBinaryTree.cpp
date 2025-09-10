/*
int height(struct Node* node){
    if(node == NULL){
        return 0;
    }

    int left =height(node ->left);
    int right = height(node->right);

    int ans = max(left,right) +1;
    return ans;
}

//diameter of longest node 
int diameter(Node* root){
     if(root == NULL){
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = hieght(roo->left) +1+height(root->right);

    int ans =max(op1,max(op2,op3));
    return ans;

}
//optimzation for t.c
pair<int ,int> diameterFast(Node* root){
     if(root == NULL){
        pair<int,int> p =make_pair(0,0);
        return p;
    }

    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second + right.second+1;

    pair<int,int> ans;
    
     ans.first =max(op1,max(op2,op3));
     ans.second =max(left.second,right.second);
    return ans;

}

pair<bool ,int> isSumTree(Node* root){
     if(root == NULL){
        pair<bool,int> p =make_pair(true,0);
        return p;
    }

    if(root->left == NULL && root->right == NULL){
         pair<bool,int> p =make_pair(true,root->data);
        return p;
    }
   
   pair<bool, int> leftAns = isSumTree(root->left);
   pair<bool, int> rightAns = isSumTree(root->right);

   bool left = leftAns.first;
   bool right = rightAns.first;

   bool condn =root->data == leftAns.second +rightAns.second;

   pair<bool,int> ans;

   if(left && right && condn){
    ans.first =true;
    ans.second = 2*root->data;
   }else{
    ans.first =false;
   }
   return ans;

}


//maximum sum of non abjacent nodes
pair<int.int>solve(Node* root){
    if(root == NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
    }

    pair<int,int> left =solve(root->left);
    pair<int,int> right =solve(root->right);
 
   pair<int,int>res;
   res.first =root->data + left.second + right.second;
   res.second = max(left.first,left.second)+max(right.first,right.second);
   return res;
}

int getMaxSum(Node* root){
    pair<int,int> ans = solve(root);
    return max(ans.first,ans.second);
}
*/