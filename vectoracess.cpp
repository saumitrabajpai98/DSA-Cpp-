#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator itr;
    int x;
    for(int i=0;i<4;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"\nVector output by traditonal method::";
    for(int i=0;i<4;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\nVector output by beginn and end() method::";
    for(auto i=v.begin(); i!=v.end();i++)//by using auto data type it lets compiler decide for data type, so here compiler thought of pointer--
    {cout<<*i<<" ";}//or iterator tpye might be not sure but most probably pointer type bcoz iterator is also of pointer type.
     cout<<"\nVector output by begin and end() method by ITERATOR::";
    for(itr=v.begin(); itr!=v.end();itr++)
    cout<<*itr<<"  ";
    cout<<endl<<"Front element is:"<<v.front()<<"    end element is:"<<v.back();
    cout<<endl<<"Size is: "<<v.size()<<endl<<"Capacity is: "<<v.capacity();
    int p;
    cout<<endl<<"Enter the new element to enter: ";
    cin>>p;
    v.push_back(p);
    cout<<endl<<"Size is: "<<v.size()<<endl<<"Capacity is: "<<v.capacity();
    return 0;
}