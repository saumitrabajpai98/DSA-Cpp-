#include<iostream>
#include<array>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the array size";
	cin>>n;
	cout<<"\nEnter the array elements";
	std::array<int,5>arr;
	for(int i=0;i<5;i++)
	cin>>arr[i];
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
	cout<<endl<<arr.front();
	return 0;
}