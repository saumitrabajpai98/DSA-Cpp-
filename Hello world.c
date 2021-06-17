#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int s;
	cin>>s;
	int a[s];
	for(int i=0;i<s;i++)
	{
	    cin>>a[i];
	}
	int j=0;
	int min=a[0];
	for(int i=0;i<s;i++)
	{
	    int x;
	    if(min>a[i])
	    {
	        min=a[i];
	        x=i;
	    }
	    int temp=a[j];
	    a[j]=min;
	    j++;
	    a[x]=temp;
	    
	}
	for(int i=0;i<s;i++)
	{
	    cout<<a[i]<<endl;
	}
	return 0;
}

