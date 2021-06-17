#include<bits/stdc++.h>
using namespace std;
void removedups(char str[])
{
	int s=*(str+2);
	cout<<s<<endl;
	int ip_ind=0,res_ind=0;
	char temp;
	bool hash[256];
	while(*(str+ip_ind))
	{
		temp=*(str+ip_ind);
		if(hash[temp]==0)
		{
			hash[temp]=1;
			*(str + res_ind) = *(str + ip_ind);  
            res_ind++;
		}
		ip_ind++;
	}
	
	*(str+res_ind) = '\0'; 
	cout<<str;
}
int main()
{
	char str[]="atesT string";
	removedups(str);
	return 0;
}
