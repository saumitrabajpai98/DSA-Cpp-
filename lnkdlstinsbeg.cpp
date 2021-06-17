#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
node *head;
void innsatbeg(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print()
{
	node *temp2=head;
	//cout<<"\nList ";
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
	cout<<"How many numbers u want to entr  ";
	int n,count=1,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the number:"<<count<<"  ";
		cin>>x;
		innsatbeg(x);
		count++;
		cout<<"\nList is::";
		print();
	}
	return 0;
}
