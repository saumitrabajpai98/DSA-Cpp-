#include<iostream>
#include<vector>
using namespace std;
int migbirds(vector <int> arr)
{
    int mi,temp;
    for(int i=0;i<arr.size()-1;i++)
    {   mi=i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j]<arr[mi])
            {
                mi=j;
            }
        }        
        temp=arr[mi];
        arr[mi]=arr[i];
        arr[i]=temp;
    }
    vector <int> countarr;
    int count=1;
    int j;
    int k=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        int j=i+1;
        if(arr[i]==arr[j])
        {
            count++;
        }
        else
        {
            countarr[k]=count;
            k++;
        }
        count=1;
    }
    int max=countarr[0];
    for(int i=1;i<countarr.size();i++)
    {
        if(max<countarr[i])
        {
            max=countarr[i];
        }
    }
    int sum=0;
    for(int i=0;i<countarr.size();i++)
    {
    	if(countarr[i]==max)//kuch dikkat hai save kar lo bad me dekhte hai.
        else
        {
            sum=sum+countarr[i];
        }
    }
    return countarr[sum];
}
int main()
{
	vector<int> arr;
	int n,x;
	cout<<"Enter the size:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	cout<<"\nAns is : "<<migbirds(arr);
	return 0;
}
