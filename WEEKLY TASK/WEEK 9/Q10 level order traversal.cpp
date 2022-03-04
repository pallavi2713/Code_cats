
/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
int height(Node *root)
{
    if(root==NULL)
     return 0;
     int l=1+height(root->right);
     int r=1+height(root->left);
     return max(l,r);
}
void solve(Node *root,int level,vector<int>&vec)
{
    
    if(root==NULL){
    return;}
    if(level==1)
    {vec.push_back(root->data);
    }
    else
    {
        
        solve(root->left,level-1,vec);
        solve(root->right,level-1,vec);
     
  }
}

//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(Node* node)
{
    int h= height(node);
    vector<vector<int>>v;
     vector<int>vv;
    for(int i=1;i<=h;i++)
    {     
        solve(node,i,vv,v);
        v.push_back(vv);
        vv.clear();
    }

  return v;
  //Your code here
}