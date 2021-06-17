#include <iostream>
using namespace std;
void page(int n, int p) 
{   
	int front=0;int rear=0;
	cout<<"Hello";
    for(int i=1;i<=p;)
    {
     front++;
     i=i+2;
    }
    cout<<"hello";
    front--;
    for(int j=n;j>=p;)
    {
     rear++;
     j=j-2;
    }
    rear--;
    int ans;
    if(front>=rear)
    ans=rear;
    else
    ans=front;
	cout<<"blah blah";
    cout<<ans;
}

int main()
{
	cout<<"Enter the elements";
   int x,y;
   cin>>x>>y;
   cout<<"\nENtered elemnts are"<<x<<y;
   page(x,y);
    return 0;
}

