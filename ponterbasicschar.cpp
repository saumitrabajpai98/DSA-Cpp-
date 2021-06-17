#include<iostream>
//#include<string.h>
using namespace std;
int sq(int x)
{
	return x*x;
}
int sumofsq(int x,int y)
{
	int z=sq(x+y);
	return z;
}
int main()
{
	int a,b,total;
	a=4;b=8;
	//total=sumofsq(a,b);
	total=sumofsq(b,2);
	cout<<total;
	return 0; 
}
