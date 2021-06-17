#include<iostream>
using namespace std;
int main()
{
	int *a,b=10;
	a=&b;
	cout<<b<<"\n";
	cout<<"\nAddress of b is:"<<*a;
	cout<<"\nUpdated Address of b is:"<<a+3;
	//c=*(++a);
    	
	cout<<"\n++a is:"<<*(++a);
	//c=*(a++);
	cout<<"\na++ is:"<<*(a++);
	cout<<"\nUpdated Address of b is:"<<a;
	//cout<<"\na++ is:"<<*(a++);
	return 0;
}
