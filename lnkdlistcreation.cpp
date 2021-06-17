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

	return 0;
}
