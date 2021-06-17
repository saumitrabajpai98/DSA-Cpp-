#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the array size:: ";
	cin>>size;
	int x=0;
	int ar[size];
	cout<<"\nEnter the array elements:: ";
	for(int i=0;i<size;i++)
	{cin>>ar[i];}
	for(int i=0;i<size-1;i++) //external loop
	{
		for(int j=0;j<size-1-i;j++)  //internal loop
		{
			if(ar[j]>ar[j+1])
			{
				x=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=x;
			}
		}
	}
	cout<<"\nSorted array is:: ";
	for(int i=0;i<size;i++)
	cout<<ar[i]<<"  ";
return 0;
}
