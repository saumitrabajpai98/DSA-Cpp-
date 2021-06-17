#include <iostream>
using namespace std;
void rotate();

    int n,d,i,temp=0;
    int arr[100];
void rotate()
	{
	    temp=arr[0];
	    for(i=0;i<n-1;i++)
	    {
	    arr[i]=arr[i+1];
	    }
	    arr[i]=temp;
	}
int main() {
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
	
	cin>>d;
	for(int j=0;j<d;j++)
	{rotate();}
	
	for(int k=0;k<n;k++)
	{
	    cout<<arr[k]<<" ";
	}
	
	return 0;
}
