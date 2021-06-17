#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* fc;//firstchild
    Node* ns;//nextsibling
};
Node* createtree(int x)
{
    Node* temp;
    temp=new Node();
    temp->data=x;
    temp->fc=NULL;
    temp->ns=NULL;
    return temp;
}
void preorder(Node* iroot)
{
    if(iroot==NULL)
        return;
    cout<<iroot->data<<" ";
    preorder(iroot->fc);  
    preorder(iroot->ns);  
}
int findnoofchild(Node *root,int current)
{
    if(root->data==current)
    {
        int count=0;
        root=root->fc;
        while(root!=NULL)
        {
            ++count;
            root=root->ns;
        }
        return count;
    }
    findnoofchild(root->fc,current);
    findnoofchild(root->ns,current);
}
int main()
{
    Node *root=createtree(10);
    root->fc=createtree(2);
    root->fc->ns=createtree(3);
    root->fc->ns->ns=createtree(4);
    root->fc->ns->ns->fc=createtree(5);
    root->fc->ns->ns->fc->ns=createtree(6);
    root->fc->ns->ns->fc->ns->ns=createtree(7);
    root->fc->ns->ns->ns=createtree(4);
    root->fc->ns->ns->ns->ns=createtree(9);
    cout<<endl;
    preorder(root);
    
    cout<<findnoofchild(root,5);
    return 0;
}
