#include<iostream>
#define n 100
using namespace std;
int arr[n];
int top=-1;
void push(int x)
{
	cout<<"\nEnter the element::: "<<endl;
				cin>>x;
	top=top+1;
	arr[top]=x;
	cout<<"\n Element  "<<arr[top]<<" pushed at position "<<top;
}
void pop()
{
	if(top==-1)
	{
	cout<<"\nList is empty";
	return;
	}
	else
	{
	cout<<endl<<" "<<arr[top]<<" Deleted";
	top=top-1;
	}
}
void disp()
{
	cout<<"\nElements of stacks are::";
	for(int i=top;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int ch,x;
	
	cout<<"\nPress 1 to Push a number";
	cout<<"\nPress 2 to pop a number";
	cout<<"\nPress 3 to Dislay elemnts present in stack";
	cout<<"\nPress 4 for exit";
	
	do
	{
	cout<<"\nEnter ur choice::";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				
				push(x);
				break;
			}
		case 2:	
			{
				pop();
				break;
			}
		case 3:
			{
				disp();
				break;
			}	
		case 4:
		{
		exit;
		break;
		}
		default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }		
	}
}
	while(ch!=4);
	return 0;
	
}

