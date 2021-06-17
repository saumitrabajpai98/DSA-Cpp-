#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp;
	cin>>n;
	int ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	j=ar[0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		 if(ar[i]<ar[j])
		 {
		 	temp=ar[j];
		 	ar[j]=ar[i];
		 	ar[i]=temp;
		 	
		 }
			}   
		}
	for(i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	int k;
	cin>>k;
	cout<<"\n"<<ar[k-1];	
	return 0;
}
