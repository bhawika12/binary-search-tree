#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *right;
    node *left;
};
class tree
{
    node *newnode;
    node *root=NULL;
public:
    void createnode(int e)
    {
        newnode=new node();
        newnode->data=e;
        newnode->right=NULL;
        newnode->left=NULL;
    }
    node *insertion(node *root,int key)
    {
        if(root==NULL)
        {
            createnode(key);
            root=newnode;
        }
        else
        {
            if(key<root->data)
                root->left=insertion(root->left,key);
            else
                root->right=insertion(root->right,key);
        }
        return root;
    }
    void display(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        else
        {
            display(root->left);
            cout<<root->data;
            display(root->right);
        }
    }
};
int main()
{
    int key,n;
    node *root=NULL;
    tree t;
    cout<<"enter the number of items";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"key"<<" ";
        cin>>key;
        root= t.insertion(root,key);
    }
       t.display(root);
}
