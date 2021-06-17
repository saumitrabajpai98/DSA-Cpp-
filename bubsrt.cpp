#include<iostream>
using namespace std;
void sort(int n,int ar[]);
void sort(int n,int ar[])
{
	int temp,flag;
	for(int i=0;i<n-1;i++)
	{
		flag=0;
		for(int j=0;j<n-1-i;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			cout<<"\nNumber of rounds:"<<i;
			return;
		}
	}
}
int main()
{
	cout<<"Enter the size of array";
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(n,ar);
	cout<<"\nSorted array is::\n";
	for(int i=0;i<n;i++)
	cout<<ar[i]<<"	";
	return 0;
}
