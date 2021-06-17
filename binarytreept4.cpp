#include<iostream>
#include<queue>
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
    queue<Node*>q;
    q.push(root);
    while(q.size()>0)
    {
        Node *temp;
        temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=0)
        {
            q.push(temp->left);
        }
        if(temp->right!=0)
        {
            q.push(temp->right);
        }
    }
}
int sumofallnodes(Node *root)
{
    if(root==NULL)
        return 0;
    static int sum=0;
    sum=sum+root->data;
    sumofallnodes(root->left);
    sumofallnodes(root->right);
    return sum;
}
int main()
{
Node *root=createnode(10);
root->left=createnode(5);
root->right=createnode(12);
root->left->left=createnode(20);
root->left->right=createnode(15);
root->left->right->left=createnode(5);
root->left->right->right=createnode(55);
root->right->right=createnode(8);
root->right->right->right=createnode(25);
root->right->right->right->left=createnode(85);
root->right->right->right->right=createnode(95);
root->right->right->right->left->right=createnode(105);
cout<<"\nTree u entered is: ";
printdata(root);
cout<<"\nSum of all nodes are: "<<sumofallnodes(root);
return 0;
}