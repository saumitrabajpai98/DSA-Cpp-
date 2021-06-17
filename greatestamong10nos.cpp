#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"Enter the size:";
    int n;
    cin>>n;
    cout<<"\nEnter the elements:\n";
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"\nElements yu entered are:: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i);
    }
    
    int a;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>v[++i])
        {
            a=v[i];
            //continue;
        }
        else
        {
            a=v[i];
            //continue;
        }
    }
    cout<<"\nGreatest element among all is: "<<a;
return 0;
}