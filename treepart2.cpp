#include <iostream>
#include <queue>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node *right;
};
Node* createnode(int datas)
{
    Node* temp;
    temp=new Node();
    temp->data=datas;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void printdata(Node* root)
{
    if(root==0)
    {
        return;
    }
    cout<<root->data<<" ";
    printdata(root->left);
    printdata(root->right);
}
bool  search(Node* root,int data)
{
    if(root==0)
    {
        return false;
    }
    else if(root->data==data)
    {
       return true;
    }
    bool res1=search(root->left,data);
    if(res1==true)
    return true;
    bool res2=search(root->right,data);
     return res2;   
}
int maixm(Node* root)
{
    queue<Node*>q;
    q.push(root);
    int max=root->data;
    while(q.size()>0)
    {
        Node*temp=q.front();
        q.pop();
        if(temp->data>max)
        {
            max=temp->data;
        }
        if(temp->left!=0)
        {
            //int left=temp->left->data;
            q.push(temp->left);
        }
        if(temp->right!=0)
        {
           // int right=temp->right->data;
           q.push(temp->right);
        }
    }
    return max;
}
int main()
{
Node *root=createnode(10);
root->left=createnode(5);
root->right=createnode(12);
root->left->left=createnode(20);
root->left->right=createnode(15);
root->right->right=createnode(5);
cout<<"\nTree u entered is: ";
printdata(root);
cout<<"\nEnter the search elemnt: ";
int x;
cin>>x;
if(search(root,x)==true)
{
    cout<<"\nElement: "<<x<<" found";
}
else
{
    cout<<"\nElement not found";
}
cout<<"\nMaximum element in the tree is: "<<maixm(root);
return 0;
}
