/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
int height(Node *root)
{
    if(root==NULL)return 0;
    int l=1+height(root->left);
    int r=1+height(root->right);
    return max(l,r);
}
void solve(vector<int>&sp,Node *root,int level,int c)
{
   if(root==NULL)return;
    if(level==1)
    {
        sp.push_back(root->data);
    }
    else if(c%2!=0)
    {
        solve(sp,root->left,level-1,c);
        solve(sp,root->right,level-1,c);
    }
    else
    {
        solve(sp,root->right,level-1,c);
        solve(sp,root->left,level-1,c);
    }
    
    
    
}