#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int n,i,j;
cout<<"Enter the value";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
}
int k=1,res,temp=0;
res=arr[0];
for(j=0;j<n;j++)
{
while(k!=n)
{
	if(arr[j]>arr[k])
	{
		res=arr[k];
		
		temp=arr[k];
		arr[k]=arr[j];
		arr[j]=temp;
		k++;
		continue;
	}
	else
	k++;
}

}
cout<<"Result is "<<res;
for(j=0;j<n;j++)
cout<<arr[j]<<" ";
getch();
return 0;

}

