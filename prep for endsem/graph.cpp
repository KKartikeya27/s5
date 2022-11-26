#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph
    {
        public:
        unordered_map<int,list<int>> adjlist;

        void addedge(int n1, int n2, bool dir) //dir=0 if undir, 1 if dir
            {
                adjlist[n1].push_back(n2);
                if(!dir)     adjlist[n2].push_back(n1);
            }
        
        void printadjlist() 
            {
                for (auto i:adjlist)
                    {
                        cout<<i.first<<"-->";
                        for (auto j:i.second)
                            {
                                cout<<j<<",";
                            }
                        cout<<endl;
                    }
            }
    };
int main()
    {
        int m,n,u,v;
        Graph gr1;
        cout<<"number fo verts: ";
        cin>>n;
        cout<<"number of edges: ";
        cin>>m;
        bool dir;
        cout<<"do you want a directed graph? (yes:1,no:0 ";
        cin>>dir;
        for (int i=0;i<m;i++)
            {
                cin>>u>>v;
                gr1.addedge(u,v,dir);
            }

            gr1.printadjlist();
        return 0;
    }