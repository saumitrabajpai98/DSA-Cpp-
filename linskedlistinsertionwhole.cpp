#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
node *head;
int count=1;
void create(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		
	}
	else
	{
		node *temp2=head;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
		}
		temp2->next=temp;
	}
}
void print()
{
	node *temp2=head;
	cout<<"\nList is:: ";
	while(temp2!=NULL)//when u have to print or traverse the list
	{
		cout<<temp2->data<<"  ";
		temp2=temp2->next;
	}
}
void insert(int f,int pos)
{
	cout<<"\nEnter the position at which u want to enter the data in the list:";
	cin>>pos;
	cout<<"\nEnter the data";
	cin>>f;
	node *temp=new node();
	//node *ptr;
	temp->data=f;
	temp->next=NULL;
	//ptr=temp;
	if(pos>count)
	{
		cout<<"Invalid position";
		return;
	}
	
	else
	{
		node *temp5;
		for(int i=1;i<=pos;i++)
		{
			temp5=temp5->next;
		}
		temp->next=temp5->next;
		temp5->next=temp;
		count++;
	}
	}

int main()
{
	head=NULL;
	cout<<"Firstly create the list!! How many Numbers u want to enter??:: ";
	int n,x,pos,f,j;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		
		cout<<"\nEnter the element no.:"<<count<<":: ";
		cin>>x;
		create(x);
		count++;
	}
	cout<<"\nFinally List is:: ";print();
	cout<<"\nCount is::"<<--count;
	cout<<"\nPress 1 to enter the data at any provided node";
	cin>>j;
	if(j==1)
	insert(f,pos);
	cout<<"\nUpdated list is:: ";
	print();
	return 0;
}
/*
if(pos==1)
	{
		temp->next=head;
		head=temp;
		count++;
	}
	else if(pos>1 && pos<count)
	{
		node *temp2;
		for(int i=1;i<pos;pos++)
		{
			temp2=temp2->next;
		}
		temp->next=temp2->next;
		temp2->next=temp;
		count++;
	}
	else if(pos>count)
	{
		node *temp3=head;
		while(temp3->next!=NULL)//when u have to go at last
		{
			temp3=temp3->next;
		}
		temp3->next=temp;
		temp->next=NULL;
		count++;
	}
	*/ 
