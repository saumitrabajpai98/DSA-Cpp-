#include<iostream>
using namespace std;
int main()
{
	int n,d,temp,temp2;
	cin>>n>>d;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	for(int i=0;i<d;i++)
	{
		temp=ar[0];
		for(int j=0;j<=n-2;j++)
		{
			temp2=j+1;
			ar[j]=ar[temp2];
		}
		ar[n-1]=temp;
	}
	for(int i=0;i<n;i++)
	cout<<ar[i]<<" ";
	return 0;
}
