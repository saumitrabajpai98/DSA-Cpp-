#include<iostream>
using namespace std;
int main()
{
	int n,x,p=0,d=0;
	cout<<"Enter the size of array";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		continue;
		
		else if(p==n-1 && p%2==0)
		{
			a[i]=a[0];
			d++;
		}
		else 
		{
			a[i+1]=a[i];
			d++;
		}
		p++;
	}
	cout<<"\n"<<d;
	return 0;
}

