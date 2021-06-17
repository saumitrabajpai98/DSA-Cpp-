#include <iostream>
#include <queue>
#include <vector>
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
int height(Node*root)
{
     if(root==NULL)
        return 0;
    else
    {
    int lheight=height(root->left);
    int rheight=height(root->right);
    int h;
    if(lheight>rheight)
        h=lheight+1;
    else
    {
        h=rheight+1;
    }
    return h;
    }
}
int diam(Node *root)
{
    int dia=height(root->left)+height(root->right)+1;
    return dia;
}

void printpath(Node *root,vector<int> v);
void printpath(vector<int>vs);
void mainfuncofprinting(Node *roots)
{
    vector<int>v;
    printpath(roots,v);
}
void printpath(Node *root,vector<int> v)
{
    if(root==NULL)
    {
        return;
    }
     v.push_back(root->data);
    if(root->left==NULL && root->right==NULL)
    {
        printpath(v);
    }
    else
    {
        printpath(root->left,v);
        printpath(root->right,v);
    }
    
}
void printpath(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"->";
    }
    cout<<endl;
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
cout<<"\nDiameter of tree is: "<<diam(root);
cout<<"\nRoot to leaf paths of a tree are:: \n";
mainfuncofprinting(root);
return 0;
}