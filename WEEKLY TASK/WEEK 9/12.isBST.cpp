bool bstinorder(Node* root,Node* &prev)
    {
      if(root){
      if(!bstinorder(root->left,prev))return false;    
        
        if(prev!=NULL && root->data<=prev->data)
         return false;
        
        prev=root;
        
        return bstinorder(root->right,prev);
      }
        else
         return true;
    }
    
    bool isBST(Node* root) 
    {
        Node* prev=NULL;
        return bstinorder(root,prev);
        // Your code here
    }