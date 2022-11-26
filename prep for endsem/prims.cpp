#include<iostream>
#include<unordered_map>
#include<list>
#include<set>
#include<vector>
using namespace std;

class Graph
    {
        public:
        int vertexg;
        Graph (int v) {vertexg=v;}
        unordered_map<int,list<pair<int,int>>> adjList;
        void AddEdgesdir(int n1, int n2,int weight)
            {
                adjList[n1].push_back(make_pair(n2,weight));
            }
        void AddEdgesundir(int n1, int n2, int weight)
            {
                adjList[n1].push_back(make_pair(n2,weight));
                adjList[n2].push_back(make_pair(n1,weight));
            }
        vector<pair<pair<int,int>,int>> Prims()
            {
                vector<int>key(vertexg+1, INT16_MAX);//3 cheeze: 3 vector      //+1 because we want direct mapping. because were giving input as starting from 0 and not from 1
                vector<bool>mst(vertexg+1,false);   
                vector<int>parent(vertexg+1,-1);
                //lets start the algo
                key[1]=0;
                parent[1]=-1;

                for (int i = 1; i < vertexg; i++)
                {
                    int mini=INT16_MAX;
                    int u;

                    //find the mini value
                    for (int v = 1; v <= vertexg; v++)
                    {
                        if (mst[v]==false&&key[v]<mini)
                        {
                            u=v;
                            mini=key[v];
                        }
                        
                    }
                    //mark min node as true
                    mst[u]=true;

                    //check its adjacent node
                    for (auto itr:adjList[u])
                    {
                        int v=itr.first;
                        int w=itr.second;
                        if (mst[v]==false&&w<key[v])
                        {
                            parent[v]=u;
                            key[v]=w;
                        }
                        
                    }
                     
                    
                }
            vector<pair<pair<int,int>,int>> result;
            for (int i = 2; i <= vertexg; i++)
            {
                result.push_back({{parent[i],i},key[i]});
            }
            return result;
            


            }
    };


int main()
    {
        int v,e,w,a,b;
        bool dir;
        cout<<"Enter number of vertices: ";
        cin>>v;
        cout<<"Enter number of edges: ";
        cin>>e;

        cout<<"Do you want a digraph or not? 1: yes, 0: no";
        cin>>dir;
        cout<<"enter directed connections \n src end weight\n";
        Graph Gr1(v);
        for (int i = 0; i < e; i++)
        {
            cin>>a>>b>>w;
            if(dir){
                Gr1.AddEdgesdir(a,b,w);
            }
            else Gr1.AddEdgesundir(a,b,w);
        }
        vector<pair<pair<int,int>,int>> ans;
        ans=Gr1.Prims();
        for(auto i : ans)
            {
                cout<<"edge from: "<<i.first.first<<" to: "<<i.first.second<<" with weight: "<<i.second<<endl;
            }

        return 0;
    }