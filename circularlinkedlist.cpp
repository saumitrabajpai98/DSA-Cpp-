#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
Node *head=NULL;
Node *getnewnode(int x)//creating new node via function
{
    Node *temp=new Node();
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void create(int y)
{
    Node *temp= getnewnode(y);
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return;
    }
    Node *temp2=head;
    while(temp2->next!=head)
    {
        temp2=temp2->next;
    }
    temp2->next=temp;
    temp->next=head;

}
void display()
{
    Node *temp=head;
    while(temp->next!=head)//imp condition to traverse in linked list
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
        cout<<temp->data<<"  ";

}
int main()
{
   //Node n1;
    create(5);
    create(10);create(15);create(20);create(25);
    display();
    return 0;

}