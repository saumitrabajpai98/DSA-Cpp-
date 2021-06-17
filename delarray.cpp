#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the size of array";
	int size,j=0,item,pos,p;
	cin>>size;
	int ar[10];
	cout<<"\nEnter the elements of array ";
	for(int i=0;i<size;i++)
	{
		cin>>ar[i];
	}
	cout<<"\nArry entered is: ";
	for(int i=0;i<size;i++)
	cout<<ar[i]<<"  ";
	if(size>0)
	{
		cout<<"\nEter the position at which u want 2 delete the element:";
		cin>>p;
		pos=p-1;
		int x;
		cout<<"\nDeleted element is:"<<ar[pos];
		for(int i=pos;i<=size;i++)
		{
		    ar[i+1]=x;
			x=ar[i];
				
		}
		cout<<"\nShifted array is: ";
		for(int i=0;i<size;i++)
		{
			cout<<ar[i]<<"  ";
		}
		size=size-1;
		cout<<"\nSize is:"<<size;
		cout<<"\nUpdated array is: ";
		for(int i=0;i<=size;i++)
		{
		cout<<ar[i]<<"  ";
		}
		
	}
	else
	cout<<"\nNo space left Sorry!!";
	return 0;
}
