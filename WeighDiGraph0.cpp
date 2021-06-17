#include<bits/stdc++.h>
using namespace std;
class Graph
{
	int v;
	vector<pair<int, int> > *l;
	public:
	Graph(int v)
	{
		this->v=v;
		l = new std::vector<std::pair<int, int> > [v];	
	}	
	void addEdge(int u,int v,int w)
	{
		l[u].push_back(make_pair(v,w));
	}
	void print()
	{
		
		for(int i=0;i<v;i++)
		{
			cout<<"\nVertex "<<i<<"->";
			for(pair<int,int> it:l[i])
			{
				int x=it.first();
				cout<<x<<" ->";
				int y=it.second();
				cout<<" with weight: "<<y;
			}
			cout<<endl;
		}
	}
};
int main()
{
	cout<<"Enter the number of edges: ";
	int v;
	cin>>v;
	Graph g(v);
	for(int i=0;i<v;i++)
	{
		int s,d,w;
		cout<<"\nEnter the Source, Destination, Weight ";
		cin>>s>>d>>w;
		addEdge(s,d,w);
	}
	print();
    return 0;
}
