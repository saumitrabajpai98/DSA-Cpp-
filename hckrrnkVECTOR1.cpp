#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int chef=0,morty=0;
        for(int i=0;i<n;i++)
        {
            int c,m;
            int csum=0,msum=0;
            cin>>c>>m;
            while(c>0)
            {
            	int csum=csum+c%10;
                c=c/10;
            }
            while(m>0)
            {
            	int msum=msum+m%10;
                m=m/10;
            }
            if(csum>msum)
            chef=chef+1;
            else if(csum==msum)
            {
                chef=chef+1;
                morty=morty+1;
            }
            else if(csum<msum)
            morty=morty+1;
        }
        if(chef>morty)
        {
            cout<<"0 "<<chef<<"\n";
        }
        else if(chef<morty)
        {
            cout<<"1 "<<morty<<"\n";
        }
        else if(chef==morty)
        {
            cout<<"2 "<<chef<<"\n";
        }
        
    }
	return 0;
}
