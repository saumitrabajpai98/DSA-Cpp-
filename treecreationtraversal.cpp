#include<iostream>
using namespace std;
class node
{
    public:
   
    int data;
    node *left;
    node *right;
};
node *create()
{
    int x;
    node *temp;
    temp= new node();
    cout<<"\nEnter the data (Enter -1 if you don't want to enter): ";
    cin>>x;
    if(x==-1)
    {
        return NULL;
    }
    temp->data=x;
    cout<<"\nEnter the left child of:"<<x;
    temp->left=create();
    cout<<"\nEnter the right child of:"<<x;
    temp->right=create();
    return temp;
}
void preorder(node *iroot)
{
    if(iroot==0)
    {return;}
    cout<<iroot->data<<" ";
    preorder(iroot->left);
    preorder(iroot->right);
}
void inorder(node *iroot)
{
    if(iroot==0)
    return;
    inorder(iroot->left);
    cout<<iroot->data<<" ";
    inorder(iroot->right);
}
void postorder(node *iroot)
{
    if(iroot==0)
    return;
    postorder(iroot->left);
    postorder(iroot->right);
    cout<<iroot->data<<" ";
}
int searchnode(node *iroot,int x)
{
    int y,left,right;
    if(iroot!=NULL)
    {
        y=iroot->data;
        if(y==x)
        {
            return 1;
        }
        left=searchnode(iroot->left,x);
        if(left==1)
        {
            return 1;
        }
    }
    else
    {
        right=searchnode(iroot->right,x);
        if(right==1)
        {
            return 1;
        }
    }
    return 0;//if we reached here means we didnt find out the elemnt
}
int main()
{
    node *root=create();
    cout<<"Preorder traversal is: ";
    preorder(root);
    cout<<endl<<"Inorder traversal is: ";
    inorder(root);
    cout<<endl<<"Postorder traversal is: ";
    postorder(root);
    int x,ch;
    cout<<"\nDo you want to search element press  1 to search an element:";
    cin>>ch;
    if(ch==1)
    {
        cout<<"\nEnter the data taht u want to search:";
        cin>>x;
        int z=searchnode(root,x);
        if(z==1)
        {
            cout<<endl<<"Element "<<x<<" found.";
        }
        else if(z==0)
        {
            cout<<endl<<"Element "<<x<<" not found.";
        }   
    }
    return 0;
}