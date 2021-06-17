#include<iostream>
#include<vector>
using namespace std;
int main()
{
    std::vector<int> vec;
    std::cout<<"\nSize is: "<<vec.size();
    cout<<"\nCapacity is: "<<vec.capacity();
    vec.push_back(5);
    cout<<"\nSize is: "<<vec.size();
    cout<<"\nCapacity is: "<<vec.capacity();
    vec.push_back(10);
    cout<<"\nSize is: "<<vec.size();
    cout<<"\nCapacity is: "<<vec.capacity();
    vec.push_back(15);
    cout<<"\nSize is: "<<vec.size();
    cout<<"\nCapacity is: "<<vec.capacity();
    vec.push_back(20);
    cout<<"\nSize is: "<<vec.size();
    cout<<"\nCapacity is: "<<vec.capacity();
    vec.push_back(25);
    cout<<"\nSize is: "<<vec.size();
    cout<<"\nCapacity is: "<<vec.capacity();
    return 0;

}