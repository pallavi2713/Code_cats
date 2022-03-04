/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
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
    if(root==NULL)return;
    if(level==1)
    {vec.push_back(root->data);
    }
    else
    {
        solve(root->left,level-1,vec);
        solve(root->right,level-1,vec);
    }
}
vector<int> reverseLevelOrder(Node *root)
{
    vector<int>v;
    int h=height(root);
    for(int i=h;i>=1;i--)
    {
        solve(root,i,v);
    }
    return v;
    // code here
}