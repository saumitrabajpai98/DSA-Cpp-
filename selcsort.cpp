#include<iostream>
using namespace std;
void selsort(int n,int ar[]);
//void min(int ar[]);
//int mi;
void selsort(int n,int ar[])
{
	
	int mi,temp;
	for(int i=0;i<n-1;i++)
	{
		mi=i;
		for(int j=i+1;j<n;j++)
		{
		if(ar[j]<ar[mi])
		{
			//temp=ar[i];
	        //ar[i]=ar[j];
	        //ar[j]=temp; 
	        mi=j;
		}
	}
	temp=ar[mi];
	ar[mi]=ar[i];
	ar[i]=temp;
	}
	
}
int main()
{
	cout<<"Enter the size";
	int n;
	cin>>n;
	int ar[n];
	cout<<"\nEnter the arry:\n";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	selsort(n,ar);
	//cout<<"\nSmallest element is::"<<mi<<"\nLocation is::"<<loc+1;
	cout<<"\nSorted array is::\n";
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<"	";
	}
	return 0;
	
}
