#include<iostream>
#include<stdlib.h>
using namespace std;
int n;
class node{
	public:
		int data;
		node *next;
};
node *head;

 
void insert(int p)
{
	node *temp=new node();
	temp->data=p;
	temp->next=NULL;
	if(head==NULL)
	{
	  head=temp;
	}
	else
	{
		node *temp1=head;
	  while(temp1->next!=NULL)
	 {
		temp1=temp1->next;
	 }
	  temp1->next=temp;
	}
}
void print()
{
	node *temp2=head;
	cout<<"\nList is:";
	while(temp2!=NULL)
	{
		cout<<temp2->data<<"  ";
		temp2=temp2->next;
	} 
	cout<<endl;
}
void reverse()
{
	node *prev=NULL,*temp3=head,*front;
	while(temp3!=NULL)
	{
		front=temp3->next;
		temp3->next=prev;
		prev=temp3;
		temp3=front;
	}
	head=prev;
}
int main()
{
		head=NULL;
	cout<<"Enter the number of items u want to insert: ";
	cin>>n;
	int x,count=1;
	
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the element no.: "<<count<<"::  ";
		cin>>x;
		insert(x);
		count++;
		print();				
}
cout<<"\nReversed form of list is::";
		reverse();
		print();

	return 0;
}

